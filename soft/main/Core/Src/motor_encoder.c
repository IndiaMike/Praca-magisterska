/*
 * motor_encoder.c
 *
 *  Created on: 26 kwi 2022
 *      Author: grzes
 */

#include "motor_encoder.h"
#include <stdlib.h>
#include "control.h"
#include "user_interface.h"

extern TMotor MOTOR_Front_Left_1;
extern TMotor MOTOR_Front_Right_2;
extern TMotor MOTOR_Rear_Left_3;
extern TMotor MOTOR_Rear_Right_4;

extern TRobot R;
extern TLed LED_4_RED;



static void MOTOR_PWM_Set_Width(TMotor *Motor,uint16_t Percent);
static void MOTOR_PWM_Start(TMotor *Motor);

void MOTOR_Init(TMotor *Motor,GPIO_TypeDef *IN_A_GpioPort, uint16_t IN_A_GpioPin,
		GPIO_TypeDef *IN_B_GpioPort, uint16_t IN_B_GpioPin, TIM_HandleTypeDef *htim,
		uint16_t channel)
{
Motor->IN_A_GpioPort = IN_A_GpioPort;
Motor->IN_A_GpioPin	 = IN_A_GpioPin;

Motor->IN_B_GpioPort = IN_B_GpioPort;
Motor->IN_B_GpioPin	 = IN_B_GpioPin;

Motor->htim = htim;
Motor->TIM_CHANNEL = channel;

MOTOR_PWM_Start(Motor);
}

void ENCODER_Init(TMotor *Motor, TEncoder *encoder, TIM_HandleTypeDef *htim_encoder)
{
	Motor->encoder = encoder;
	Motor->encoder->htim_encoder = htim_encoder;

	Motor->encoder->Current_Value		=0;
	Motor->encoder->Last_Value			=0;
	Motor->encoder->Difference_Pulse	=0;


	Motor->encoder->Total_Distance_mm	=0;
	Motor->encoder->Difference_mm		=0;

	Motor->encoder->Actual_Speed_Pulse_per_Sec	=0;
	Motor->encoder->Actual_Speed_MM_per_Sec	=0;
	Motor->encoder->Actual_Speed_Rad_per_Sec	=0;
}

void MOTOR_PID_Connect(TMotor *Motor, TPid *pid)
{
	Motor->pid = pid;
}

static void MOTOR_PWM_Set_Width(TMotor *Motor,uint16_t Permil)
{
	if(Permil > MAX_PWM_VALUE)
		Permil = MAX_PWM_VALUE;
	__HAL_TIM_SET_COMPARE(Motor->htim, Motor->TIM_CHANNEL,Permil);
}

static void MOTOR_PWM_Start(TMotor *Motor)
{
	MOTOR_PWM_Set_Width(Motor,0);
	HAL_TIM_PWM_Start(Motor->htim, Motor->TIM_CHANNEL);
}


void MOTOR_Soft_STOP(TMotor *Motor)
{
	MOTOR_PWM_Set_Width(Motor,0);
}

void MOTOR_Emergency_STOP(TMotor *Motor)
{
	MOTOR_PWM_Set_Width(Motor,0);
	HAL_GPIO_WritePin(Motor->IN_A_GpioPort, Motor->IN_A_GpioPin, RESET);
	HAL_GPIO_WritePin(Motor->IN_B_GpioPort, Motor->IN_B_GpioPin, RESET);
}


void MOTOR_Set_Speed(TMotor *Motor)
{

	if (Motor->pid->out > -0.05f && Motor->pid->out < 0.05f)
		{
		MOTOR_Soft_STOP(Motor);

		}
	else if( Motor->pid->out >= 0.0f)
	{
		HAL_GPIO_WritePin(Motor->IN_A_GpioPort, Motor->IN_A_GpioPin, RESET);
		HAL_GPIO_WritePin(Motor->IN_B_GpioPort, Motor->IN_B_GpioPin, SET);
		MOTOR_PWM_Set_Width(Motor,(uint16_t)(fabsf(Motor->pid->out) * 999.0f));
	}
	else if( Motor->pid->out < 0.0f)
	{
		HAL_GPIO_WritePin(Motor->IN_A_GpioPort, Motor->IN_A_GpioPin, SET);
		HAL_GPIO_WritePin(Motor->IN_B_GpioPort, Motor->IN_B_GpioPin, RESET);
		MOTOR_PWM_Set_Width(Motor,(uint16_t)(fabsf(Motor->pid->out) * 999.0f));
	}

}


void ENCODER_Speed_Calculate(TMotor *Motor)
{
	Motor->encoder->Last_Value 			= Motor->encoder->Current_Value;
	Motor->encoder->Current_Value 		= (int16_t)Motor->encoder->htim_encoder->Instance->CNT;
	Motor->encoder->Difference_Pulse	= Motor->encoder->Current_Value - Motor->encoder->Last_Value;
	if(Motor->encoder->Difference_Pulse > 32768) Motor->encoder->Difference_Pulse -=65536;
	if(Motor->encoder->Difference_Pulse <-32768) Motor->encoder->Difference_Pulse  =65536 - abs(Motor->encoder->Difference_Pulse);
	Motor->encoder->Difference_Angle	= Motor->encoder->Difference_Pulse * DEG_PER_PULSE;
	Motor->encoder->Difference_Radian	= Motor->encoder->Difference_Angle * PI / 180.0;

	Motor->encoder->Actual_Speed_Rad_per_Sec	= (float)Motor->encoder->Difference_Radian /(float)DELTA_TIME_S;
	Motor->encoder->Actual_Speed_Deg_per_Sec	= (float)Motor->encoder->Difference_Angle  /(float)DELTA_TIME_S;

	Motor->pid->Actual_Value			= Motor->encoder->Actual_Speed_Rad_per_Sec;

	//Motor->encoder->Speed_Pulse_per_Sec = (float)Motor->encoder->Difference_Pulse * (float)FREQUENCY_OF_TIM_CALCULATE_INTERRUPT_HZ;
	//Motor->encoder->Speed_MM_per_Sec	= Motor->encoder->Speed_Pulse_per_Sec * (float)WHEEL_CIRCUMFERENCE_MM / (float)ENCODER_PULSE_PER_REVOLUTION;
	//Motor->encoder->Speed_Deg_per_Sec	= (float)Motor->encoder->Difference_Pulse * (float)PULSE_PER_DEG / TIME_OF_CALCULATION_CYCLE_MS;

	Motor->encoder->Difference_mm		= (float)Motor->encoder->Difference_Pulse * WHEEL_CIRCUMFERENCE_MM / ENCODER_PULSE_PER_REVOLUTION;
	Motor->encoder->Total_Distance_mm	+=Motor->encoder->Difference_mm;
	ENCODER_Diagnostic(Motor);
}


void ENCODER_Diagnostic(TMotor *Motor)
{
	if(Motor->pid->out > 0.99 || Motor->pid->out < -0.99 )
	{
		Motor->encoder->encoder_wathdog++;
	}
	else
	{
		Motor->encoder->encoder_wathdog=0;
	}

	if(Motor->encoder->encoder_wathdog > 200)
	{
		LED_OnOff(&LED_4_RED, LED_ON);
		MOTOR_Soft_STOP(&MOTOR_Front_Left_1);
		MOTOR_Soft_STOP(&MOTOR_Front_Right_2);
		MOTOR_Soft_STOP(&MOTOR_Rear_Left_3);
		MOTOR_Soft_STOP(&MOTOR_Rear_Right_4);
		while(1){}
	}
}
void ENCODER_Total_Dist_Reset(TMotor *Motor)
{
	Motor->encoder->Total_Distance_mm = 0.0;
}




/*
 * motor_encoder.c
 *
 *  Created on: 26 kwi 2022
 *      Author: grzes
 */
#include "main.h"
#include "motor_encoder.h"

static void MOTOR_PWM_Set_Width(TMotor *Motor,uint8_t Percent);
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

	Motor->encoder->Speed_Pulse_per_Sec	=0;
	Motor->encoder->Speed_MM_per_Sec	=0;
}


static void MOTOR_PWM_Set_Width(TMotor *Motor,uint8_t Percent)
{
	__HAL_TIM_SET_COMPARE(Motor->htim, Motor->TIM_CHANNEL,Percent);
}

static void MOTOR_PWM_Start(TMotor *Motor)
{	MOTOR_PWM_Set_Width(Motor,0);
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

void MOTOR_Set_Speed(TMotor *Motor, Motor_Direcrion Direction, uint8_t Speed_in_Percentage)
{
	if(Direction == Forward)
	{
		HAL_GPIO_WritePin(Motor->IN_A_GpioPort, Motor->IN_A_GpioPin, RESET);
		HAL_GPIO_WritePin(Motor->IN_B_GpioPort, Motor->IN_B_GpioPin, SET);
		MOTOR_PWM_Set_Width(Motor,Speed_in_Percentage);
	}
	else if(Direction == Backward)
	{
		HAL_GPIO_WritePin(Motor->IN_A_GpioPort, Motor->IN_A_GpioPin, SET);
		HAL_GPIO_WritePin(Motor->IN_B_GpioPort, Motor->IN_B_GpioPin, RESET);
		MOTOR_PWM_Set_Width(Motor,Speed_in_Percentage);
	}
}

void ENCODER_Speed_Calculate(TMotor *Motor)
{
	Motor->encoder->Last_Value 			= Motor->encoder->Current_Value;
	Motor->encoder->Current_Value 		= (int16_t)Motor->encoder->htim_encoder->Instance->CNT;
	Motor->encoder->Difference_Pulse	= Motor->encoder->Current_Value - Motor->encoder->Last_Value;

	Motor->encoder->Speed_Pulse_per_Sec = (float)Motor->encoder->Difference_Pulse * (float)FREQUENCY_OF_TIM_CALCULATE_INTERRUPT_HZ;
	Motor->encoder->Speed_MM_per_Sec	= Motor->encoder->Speed_Pulse_per_Sec * (float)WHEEL_CIRCUMFERENCE_MM / (float)ENCODER_PULSE_PER_REVOLUTION;

	Motor->encoder->Difference_mm		= (float)Motor->encoder->Difference_Pulse * WHEEL_CIRCUMFERENCE_MM / ENCODER_PULSE_PER_REVOLUTION;
	Motor->encoder->Total_Distance_mm	+=Motor->encoder->Difference_mm;

}

void ENCODER_Total_Dist_Reset(TMotor *Motor)
{
	Motor->encoder->Total_Distance_mm = 0.0;
}


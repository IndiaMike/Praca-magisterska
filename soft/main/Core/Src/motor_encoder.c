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


void MOTOR_Test(TMotor *Motor)
{

	HAL_GPIO_WritePin(Motor->IN_A_GpioPort, Motor->IN_A_GpioPin, RESET);
	HAL_GPIO_WritePin(Motor->IN_B_GpioPort, Motor->IN_B_GpioPin, SET);

	__HAL_TIM_SET_COMPARE(Motor->htim, Motor->TIM_CHANNEL,50);
}

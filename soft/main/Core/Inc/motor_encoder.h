/*
 * motor_encoder.h
 *
 *  Created on: 26 kwi 2022
 *      Author: grzes
 */

#ifndef INC_MOTOR_ENCODER_H_
#define INC_MOTOR_ENCODER_H_

#include "main.h"
#include "pid_controller.h"



//to change the calculation frequency change below:
#define FREQUENCY_OF_TIM_CALCULATE_INTERRUPT_HZ 100.0 //in HZ;
#define TIME_OF_CALCULATION_CYCLE_MS (1000/ FREQUENCY_OF_TIM_CALCULATE_INTERRUPT_HZ) //10 ms
#define DELTA_TIME_S	(1.0 / FREQUENCY_OF_TIM_CALCULATE_INTERRUPT_HZ)					//0,01s


#define ENCODER_PULSE_PER_REVOLUTION	1920

#define WHEEL_CIRCUM_CALIBRATION_RATIO 0.98173964f
#define WHEEL_CIRCUMFERENCE_MM	360 * WHEEL_CIRCUM_CALIBRATION_RATIO

#define PULSE_PER_DEG (ENCODER_PULSE_PER_REVOLUTION / 360.0)
#define DEG_PER_PULSE (360.0 / ENCODER_PULSE_PER_REVOLUTION)

#define PULSE_PER_RAD (ENCODER_PULSE_PER_REVOLUTION / (2.0 * PI))

#define PI 3.1415
#define WHEEL_R (WHEEL_CIRCUMFERENCE_MM / (2.0 * PI))

#define MAX_PWM_VALUE  600
//#define MIN_PWM_VALUE -600

typedef enum
{
	Motor_1_Front_Left = 0, Motor_2_Front_Rear, Motor_3_Rear_Left, Motor_4_Rear_Right
}Motor;

typedef enum
{
	Forward = 0, Backward
}Motor_Direcrion;

typedef struct
{
	//ticks
	int32_t		Last_Value;
	int32_t	 	Current_Value;
	int32_t		Difference_Pulse;

	//distance
	float		Difference_mm;
	float		Total_Distance_mm;
	float		Difference_Angle;
	float		Difference_Radian;

	//measured speed
	float		Actual_Speed_MM_per_Sec;
	float		Actual_Speed_Pulse_per_Sec;
	float		Actual_Speed_Deg_per_Sec;
	float		Actual_Speed_Rad_per_Sec;		//mierzona predkosc w rad/s

	// timer encoder mode
	TIM_HandleTypeDef *htim_encoder;

	uint16_t encoder_wathdog;

}TEncoder;
typedef struct
{
	//ports&pin
	GPIO_TypeDef 	*IN_A_GpioPort;
	uint16_t	 	IN_A_GpioPin;

	GPIO_TypeDef 	*IN_B_GpioPort;
	uint16_t	 	IN_B_GpioPin;

	//PWM timer
	TIM_HandleTypeDef *htim;
	uint16_t		  TIM_CHANNEL;

	TEncoder 		*encoder;
	TPid 			*pid;

	//not used jet
	Motor			 MotorID;
	Motor_Direcrion	 Direction;

}TMotor;

//functions
void MOTOR_Init(TMotor *Motor,GPIO_TypeDef *IN_A_GpioPort, uint16_t IN_A_GpioPin,
		GPIO_TypeDef *IN_B_GpioPort, uint16_t IN_B_GpioPin, TIM_HandleTypeDef *htim,
		uint16_t channel);


void MOTOR_Set_Speed(TMotor *Motor);
void MOTOR_Soft_STOP(TMotor *Motor);
void MOTOR_Emergency_STOP(TMotor *Motor);



// ENCODERS
void ENCODER_Init(TMotor *Motor, TEncoder *encoder, TIM_HandleTypeDef *htim_encoder);
void ENCODER_Total_Dist_Reset(TMotor *Motor);
void ENCODER_Speed_Calculate(TMotor *Motor);
void ENCODER_Diagnostic(TMotor *Motor);

void MOTOR_PID_Connect(TMotor *Motor, TPid *pid);

#endif /* INC_MOTOR_ENCODER_H_ */

/*
 * motor_encoder.h
 *
 *  Created on: 26 kwi 2022
 *      Author: grzes
 */

#ifndef INC_MOTOR_ENCODER_H_
#define INC_MOTOR_ENCODER_H_

//to change the calculation frequency change below:
#define FREQUENCY_OF_TIM_CALCULATE_INTERRUPT_HZ 100 //in HZ;
#define TIME_OF_CALCULATION_CYCLE_MS 1000/ FREQUENCY_OF_TIM_CALCULATE_INTERRUPT_HZ  //10 ms
#define DELTA_TIME_S	1 / FREQUENCY_OF_TIM_CALCULATE_INTERRUPT_HZ					//0,01s


#define ENCODER_PULSE_PER_REVOLUTION	1000
#define WHEEL_CIRCUMFERENCE_MM	360


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
	int32_t	Last_Value;
	int32_t	Current_Value;
	int32_t		Difference_Pulse;

	//distance
	float		Difference_mm;
	float		Total_Distance_mm;

	//speed
	float		Speed_MM_per_Sec;
	float		Speed_Pulse_per_Sec;
	// timer encoder mode
	TIM_HandleTypeDef *htim_encoder;


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


	Motor			 MotorID;
	Motor_Direcrion	 Direction;

	TEncoder 		*encoder;


}TMotor;

//functions
void MOTOR_Init(TMotor *Motor,GPIO_TypeDef *IN_A_GpioPort, uint16_t IN_A_GpioPin,
		GPIO_TypeDef *IN_B_GpioPort, uint16_t IN_B_GpioPin, TIM_HandleTypeDef *htim,
		uint16_t channel);



void MOTOR_Soft_STOP(TMotor *Motor);
void MOTOR_Emergency_STOP(TMotor *Motor);
void MOTOR_Set_Speed(TMotor *Motor, Motor_Direcrion Direction, uint8_t Speed_in_Percentage);


// ENCODERS
void ENCODER_Total_Dist_Reset(TMotor *Motor);
void ENCODER_Speed_Calculate(TMotor *Motor);
void ENCODER_Init(TMotor *Motor, TEncoder *encoder, TIM_HandleTypeDef *htim_encoder);
#endif /* INC_MOTOR_ENCODER_H_ */
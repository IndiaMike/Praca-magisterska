/*
 * motor_encoder.h
 *
 *  Created on: 26 kwi 2022
 *      Author: grzes
 */

#ifndef INC_MOTOR_ENCODER_H_
#define INC_MOTOR_ENCODER_H_


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
	//ports&pin
	GPIO_TypeDef 	*IN_A_GpioPort;
	uint16_t	 	IN_A_GpioPin;

	GPIO_TypeDef 	*IN_B_GpioPort;
	uint16_t	 	IN_B_GpioPin;

	TIM_HandleTypeDef *htim;
	uint16_t		  TIM_CHANNEL;

	Motor			 MotorID;

	Motor_Direcrion	 Direction;

	void(*Test)(void);

	void(*Set_Direction_Forward)(void);
	void(*Set_Direction_Backward)(void);
	void(*Set_Speed)(void);

}TMotor;

//functions
void MOTOR_Init(TMotor *Motor,GPIO_TypeDef *IN_A_GpioPort, uint16_t IN_A_GpioPin,
		GPIO_TypeDef *IN_B_GpioPort, uint16_t IN_B_GpioPin,TIM_HandleTypeDef *htim,
		uint16_t channel);



void MOTOR_Soft_STOP(TMotor *Motor);
void MOTOR_Emergency_STOP(TMotor *Motor);
void MOTOR_Set_Speed(TMotor *Motor, Motor_Direcrion Direction, uint8_t Speed_in_Percentage);
void MOTOR_Test(TMotor *Motor);

#endif /* INC_MOTOR_ENCODER_H_ */

/*
 * control.c
 *
 *  Created on: 1 cze 2022
 *      Author: grzes
 */
#include "control.h"
#include "pid_controller.h"
#include "math.h"

extern TMotor MOTOR_Front_Left_1;
extern TMotor MOTOR_Front_Right_2;
extern TMotor MOTOR_Rear_Left_3;
extern TMotor MOTOR_Rear_Right_4;

extern TPid Position_PID;

void ROBOT_Stop(TRobot *R)
{
	R->isPidOn = false;
	for(uint8_t i=0;i<4;i++)
		MOTOR_Soft_STOP(&R->Motors[i]);
}

void ROBOT_Init(TRobot *R)
{
	R->Motors[0]= MOTOR_Front_Left_1;
	R->Motors[1]= MOTOR_Front_Right_2;
	R->Motors[2]= MOTOR_Rear_Left_3;
	R->Motors[3]= MOTOR_Rear_Right_4;

	R->isPidOn = false;
	R->actual_position 		 = 0.0;
	R->left_site_distance_MM = 0.0;
	R->right_site_distance_MM= 0.0;
	R->actual_angle			 = 0.0;
	R->max_speed_Rad_per_Sec = 4.0;

	R->Pid_Position = &Position_PID;
}



void ROBOT_Go_Forward(TRobot *R)
{
	R->isPidOn = true;
	for(uint8_t i=0;i<4;i++)
		{
			R->Motors[i].pid->Set_Value = R->Pid_Position->out * R->max_speed_Rad_per_Sec;
		}


}

void ROBOT_Calculate(TRobot *R)
{
	for(uint8_t i=0;i<4;i++)
		{
			R->actual_position += (R->Motors[i].encoder->Difference_mm)/4.0f;
		}
	R->Pid_Position->Actual_Value = R->actual_position;
	R->left_site_distance_MM  += (R->Motors[0].encoder->Difference_mm + R->Motors[2].encoder->Difference_mm) / 2.0f;
	R->right_site_distance_MM += (R->Motors[1].encoder->Difference_mm + R->Motors[3].encoder->Difference_mm) / 2.0f;
	R->actual_angle 		   = fmod(atan((R->left_site_distance_MM - R->right_site_distance_MM) / (float)ROBOT_WIDTH_MM) * RAD_2_DEG, 360.0f);
}

void ROBOT_Go_Direction(TRobot *R, float Speed)
{
	if(R->set_angle > R->actual_angle)
	{
		R->Motors[0].pid->Set_Value = Speed;
		R->Motors[1].pid->Set_Value = -Speed;
		R->Motors[2].pid->Set_Value = Speed;
		R->Motors[3].pid->Set_Value = -Speed;
	}
}

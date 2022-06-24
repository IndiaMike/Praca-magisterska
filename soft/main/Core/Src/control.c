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



void ROBOT_Stop(TRobot *R)
{
	R->isMotorsPidOn = false;
	for(uint8_t i=0;i<4;i++)
		MOTOR_Soft_STOP(&R->Motors[i]);
}

void ROBOT_Init(TRobot *R)
{
	R->Motors[0]= MOTOR_Front_Left_1;
	R->Motors[1]= MOTOR_Front_Right_2;
	R->Motors[2]= MOTOR_Rear_Left_3;
	R->Motors[3]= MOTOR_Rear_Right_4;

	R->isMotorsPidOn = false;
	R->actual_position 		 = 0.0;
	R->left_site_distance_MM = 0.0;
	R->right_site_distance_MM= 0.0;
	R->actual_angle			 = 0.0;
	R->max_speed_Rad_per_Sec = 3.0;


	R->tolerance = 5.0;
	P_Init(&R->P_direction, 0.03);
	P_Init(&R->P_distance,  0.03);


}




void ROBOT_Set_Point(TRobot *R, float x, float y, float angle)
{
	R->Set_X = x;
	R->Set_Y = y;
}
void ROBOT_Go2Point(TRobot *R)
{
	float dir = 0.0;
	float dist= 0.0;

	//jezeli blisko to zakończ regulacje
	/*if(R->TargetDistanceMM < R->tolerance)
	{
		R->isMotorsPidOn = false;
		return;
	}
	R->isMotorsPidOn = true;
*/
	//regulacja kąta regulator P

		dist = P_Controller(&R->P_distance);
		//dir = P_Controller(&R->P_direction);





		R->Motors[0].pid->Set_Value = (dist + dir) * R->max_speed_Rad_per_Sec;
		R->Motors[1].pid->Set_Value = (dist - dir) * R->max_speed_Rad_per_Sec;
		R->Motors[2].pid->Set_Value = (dist + dir) * R->max_speed_Rad_per_Sec;
		R->Motors[3].pid->Set_Value = (dist - dir) * R->max_speed_Rad_per_Sec;


}
void ROBOT_Calculate(TRobot *R)
{
	float mean = 0.0;
	for(uint8_t i=0;i<4;i++)
		{
			R->actual_position += (R->Motors[i].encoder->Difference_mm)/4.0f;
		mean += R->Motors[i].encoder->Difference_mm;
		}
	mean /= 4.0;


	R->left_site_distance_MM  += (R->Motors[0].encoder->Difference_mm + R->Motors[2].encoder->Difference_mm) / 2.0f;
	R->right_site_distance_MM += (R->Motors[1].encoder->Difference_mm + R->Motors[3].encoder->Difference_mm) / 2.0f;

	R->actual_angle 		   = fmod((R->left_site_distance_MM - R->right_site_distance_MM) / (float)ROBOT_WIDTH_MM * RAD_2_DEG , 360.f);



	R->X += sin(R-> actual_angle * DEG_2_RAD) * mean;
	R->Y += cos(R-> actual_angle * DEG_2_RAD) * mean;
	float deltaX = R->Set_X - R->X;
	float deltaY = R->Set_Y - R->Y;
	R->Set_angle = atan2(deltaX,deltaY) * RAD_2_DEG;
	R->TargetDistanceMM = sqrt( deltaX * deltaX + deltaY * deltaY);

	R->P_direction.Set_Value = R->Set_angle;
	R->P_direction.Actual_Value = R->actual_angle;

	R->P_distance.Set_Value  = 0.0;
	R->P_distance.Actual_Value  = R->TargetDistanceMM;

}



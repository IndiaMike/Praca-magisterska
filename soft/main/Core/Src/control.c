/*
 * control.c
 *
 *  Created on: 1 cze 2022
 *      Author: grzes
 */
#include "control.h"
#include "pid_controller.h"
#include "math.h"
#include "tim.h"
#include "utils.h"
#include "user_interface.h"

#include "stdio.h"
#include "stdlib.h"

extern TMotor MOTOR_Front_Left_1;
extern TMotor MOTOR_Front_Right_2;
extern TMotor MOTOR_Rear_Left_3;
extern TMotor MOTOR_Rear_Right_4;

extern TRobot R;
extern uint8_t robot_mode_change_first_scan_flag;
extern uint16_t wifi_connection_watchdog_counter;

extern TLed LED_1_GREEN;
extern TLed LED_2_GREEN;
extern TLed LED_3_YELLOW;
extern TLed LED_4_RED;



extern bool isPidsON;

int pathTable[32][3];
int pathCounter=0;
int pathStep =0;
// to angle calibration
//uint8_t i_calibration_counter =0;

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
	R->max_speed_Rad_per_Sec = 5.0;


	R->tolerance = 10.0;

	R->isMotorsPidOn = false;
	R->control_mode = Manual_Mode;
	R->isPathModeEN = false;

	P_Init(&R->P_direction, 0.05);
	P_Init(&R->P_distance,  0.05);


}


void ROBOT_Manual(dir direction)
{
	if(R.control_mode == Manual_Mode && R.isG2PControllerEN == false)
	{
		float angle = 1.0,dist = 1.0;
		if( R.Motors[0].pid->Set_Value  == 0.0 &&
			R.Motors[1].pid->Set_Value == 0.0 &&
			R.Motors[2].pid->Set_Value == 0.0 &&
			R.Motors[3].pid->Set_Value == 0.0 )
		{
			angle = 2.0,dist = 2.0;
		}



		switch(direction){
		case dW:
			R.Motors[0].pid->Set_Value += dist;
			R.Motors[1].pid->Set_Value += dist;
			R.Motors[2].pid->Set_Value += dist;
			R.Motors[3].pid->Set_Value += dist;
			break;

		case dS:
			R.Motors[0].pid->Set_Value -= dist;
			R.Motors[1].pid->Set_Value -= dist;
			R.Motors[2].pid->Set_Value -= dist;
			R.Motors[3].pid->Set_Value -= dist;
			break;

		case dA:
			R.Motors[0].pid->Set_Value -= angle;
			R.Motors[1].pid->Set_Value += angle;
			R.Motors[2].pid->Set_Value -= angle;
			R.Motors[3].pid->Set_Value += angle;
			break;

		case dD:
			R.Motors[0].pid->Set_Value += angle;
			R.Motors[1].pid->Set_Value -= angle;
			R.Motors[2].pid->Set_Value += angle;
			R.Motors[3].pid->Set_Value -= angle;
			break;

		case dSpeed0:
			R.Motors[0].pid->Set_Value = 0.0;
			R.Motors[1].pid->Set_Value = 0.0;
			R.Motors[2].pid->Set_Value = 0.0;
			R.Motors[3].pid->Set_Value = 0.0;
			break;

		}
	}
}

void ROBOT_Set_Point(TRobot *R, float x, float y, float angle)
{
	R->Set_X = x;
	R->Set_Y = y;
}
void ROBOT_GoPath(TRobot *R)
{
	if(pathCounter>(pathStep))
	{
	R->Set_X = pathTable[pathStep][1] * ONE_CELL_DIM;
	R->Set_Y = pathTable[pathStep][2] * ONE_CELL_DIM;

	R->control_mode = Go2Point_Mode;
	R->isG2PControllerEN = true;
	R->isPathModeEN = true;
	R->isMotorsPidOn = true;

	}
	else
	{
		R->isPathModeEN = false;
		pathStep = 0;
	}
}

void ROBOT_Go2Point(TRobot *R)
{
	char Message[32];
	float dir = 0.0;
	float dist= 0.0;


	if(R->TargetDistanceMM > R->tolerance)
	{

		if(R->P_direction.error < 10.0 ) // angle < 10deg  dist. Controller & angle Controller
		{
			dist = P_ControllerDistance(&R->P_distance);
		}
		else							 // angle > 10deg  angle Controller only
		{
			dist = 0.0;
		}
		dir  = P_ControllerAngle(&R->P_direction);
	}
	else								// Robot in tolerance; Controller Disable
	{
		R->isG2PControllerEN = false;
		R->Motors[0].pid->Set_Value = 0.0;
		R->Motors[1].pid->Set_Value = 0.0;
		R->Motors[2].pid->Set_Value = 0.0;
		R->Motors[3].pid->Set_Value = 0.0;
		sprintf(Message, "Cell# %d, %d, %d, ", R->Cell_X_anctual, R->Cell_Y_anctual,(int)( R->actual_angle));
		UartLog(Message);

		if(R->isPathModeEN == true)pathStep++;
	}



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

/*
	//__________tmp for calibration angle_______________
	i_calibration_counter++;
	uint8_t Message[32];
	if(i_calibration_counter > 99)
	{

		float tmp_calibration_ratio = (R->left_site_distance_MM - R->right_site_distance_MM) / (float)ROBOT_WIDTH_MM * RAD_2_DEG;
		sprintf(Message,"a= %2.f", tmp_calibration_ratio);
		UartLog(Message);
		i_calibration_counter = 0;
	}

	//____________________end_calibration_______________
*/

	R->X += sin(R-> actual_angle * DEG_2_RAD) * mean;
	R->Y += cos(R-> actual_angle * DEG_2_RAD) * mean;
	float deltaX = R->Set_X - R->X;
	float deltaY = R->Set_Y - R->Y;
	R->Set_angle = atan2(deltaX,deltaY) * RAD_2_DEG;

	//_____ walk around mode change_____________________
	if(robot_mode_change_first_scan_flag == 1)
	{
		R->Set_angle = R->actual_angle;
		robot_mode_change_first_scan_flag = 0;
	}
	//___________________end____________________________

	R->TargetDistanceMM = sqrt( deltaX * deltaX + deltaY * deltaY);

	R->P_direction.Set_Value = R->Set_angle;
	R->P_direction.Actual_Value = R->actual_angle;

	R->P_distance.Set_Value  = 0.0;
	R->P_distance.Actual_Value  = R->TargetDistanceMM;


		if(R->X >= 0)
	{
		R->Cell_X_anctual = (int)((R->X + (ONE_CELL_DIM/2)) / ONE_CELL_DIM);
	}

	else if(R->X < 0)
	{
		R->Cell_X_anctual = (int)((R->X - (ONE_CELL_DIM/2)) / ONE_CELL_DIM);
	}


		if(R->Y >= 0)
	{
		R->Cell_Y_anctual = (int)((R->Y + (ONE_CELL_DIM/2)) / ONE_CELL_DIM);
	}

	else if(R->Y < 0)
	{
		R->Cell_Y_anctual = (int)((R->Y - (ONE_CELL_DIM/2)) / ONE_CELL_DIM);
	}

}


void ROBOT_HomeIsHere(void)
{



	R.actual_position 		 = 0.0;
	R.left_site_distance_MM = 0.0;
	R.right_site_distance_MM= 0.0;
	R.actual_angle			 = 0.0;
	R.max_speed_Rad_per_Sec = 4.0;

	R.X=0.0;
	R.Y=0.0;

	R.Set_X=0;
	R.Set_Y=0;
}
void ROBOT_Set_Mode(TMode mode)
{
	if(mode == Go2Point_Mode)
	{

		R.isG2PControllerEN = false;
		R.isMotorsPidOn = false;
		robot_mode_change_first_scan_flag = 1;

		R.Set_X = R.X;
		R.Set_Y = R.Y;
		R.Set_angle = R.actual_angle;

		for (uint8_t i=0; i<4; i++)
		{

			R.Motors[i].pid->error = 0.0;
			R.Motors[i].pid->previous_error= 0.0;
			R.Motors[i].pid->total_error= 0.0;
			R.Motors[i].pid->out= 0.0;
			R.Motors[i].pid->Set_Value= 0.0;
			R.Motors[i].pid->Actual_Value= 0.0;

		}


		//direction
		R.P_direction.Actual_Value = 0.0;
		R.P_direction.Set_Value	=	0.0;
		R.P_direction.error = 0.0;

		//distance
		R.P_distance.Actual_Value = 0.0;
		R.P_distance.Set_Value = 0.0;
		R.P_distance.error = 0.0;



		R.isMotorsPidOn = true;
		R.isG2PControllerEN = true;
		R.control_mode = Go2Point_Mode;
	}


	if(mode == Manual_Mode)
	{
		R.isG2PControllerEN = false;
		R.control_mode = Manual_Mode;
	}

}

void LIDAR_Set_PWM(uint8_t Percent)
{

		if(Percent > 100) Percent = 100;
		if(Percent < 0)   Percent = 0;
		__HAL_TIM_SET_COMPARE(&htim10, TIM_CHANNEL_1,Percent * 10);
		HAL_TIM_PWM_Start(&htim10, TIM_CHANNEL_1);
}
void COMUNICATION_Watchdog_Incerement(void)
{
	wifi_connection_watchdog_counter++;
	if(wifi_connection_watchdog_counter > 400)
	{
		ROBOT_Stop(&R);
		LED_OnOff(&LED_4_RED, LED_ON);
		UartLog("WIFI Watchdog timeout!");
	}
}

void COMUNICATION_Watchdog_Reset(void)
{
	wifi_connection_watchdog_counter = 0;
}

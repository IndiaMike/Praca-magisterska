/*
 * control.h
 *
 *  Created on: 1 cze 2022
 *      Author: grzes
 */

#ifndef INC_CONTROL_H_
#define INC_CONTROL_H_

#include "main.h"
#include <stdbool.h>
#include "motor_encoder.h"
#include "pid_controller.h"

#define ROBOT_POSITION_Kp					0.035
#define ROBOT_POSITION_Ki					0.0
#define ROBOT_POSITION_Kd					0.0
#define ROBOT_POSITION_ANTI_WINDUP		    200

#define ROBOT_WIDTH_MM 313.0
#define RAD_2_DEG 57.29577951308f
#define DEG_2_RAD 0.01745329251994f

typedef struct
{
	bool 	 isPidOn;
	float left_site_distance_MM;
	float right_site_distance_MM;

	float actual_position;
	float set_position;

	float actual_angle;


	float max_speed_Rad_per_Sec;

	TPid	 *Pid_Position;
	TMotor 	 Motors[4];

	float X;
	float Y;
	float Set_X;
	float Set_Y;

	float TargetDistanceMM;


	float Set_angle;
}TRobot;

void ROBOT_Init(TRobot *R);
void ROBOT_Stop(TRobot *R);
void ROBOT_Go(TRobot *R, float Speed);
void ROBOT_Calculate(TRobot *R);
#endif /* INC_CONTROL_H_ */

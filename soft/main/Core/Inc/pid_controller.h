/*
 * pid_controller.h
 *
 *  Created on: 10 maj 2022
 *      Author: grzes
 */

#ifndef INC_PID_CONTROLLER_H_
#define INC_PID_CONTROLLER_H_

#include "main.h"
#include "math.h"




#define MOTOR_Kp					0.15
#define MOTOR_Ki					1.0
#define MOTOR_Kd					0.0
#define MOTOR_ANTI_WINDUP		    200


typedef struct
{
	float previous_error;
	float total_error;
	float error;

	float out;
	//controllers gains
	float Kp;
	float Ki;
	float Kd;

	float Set_Value;
	float Actual_Value;

	float anti_windup_limit;
}TPid;


typedef struct
{
	float error;
	float Kp;
	float Set_Value;
	float Actual_Value;
}TP;


void PID_Init(TPid *pid, float kp, float ki, float kd, float anti_windup_limit);
void PID_Controller(TPid *pid);

void P_Init(TP *P, float kp);
float P_Controller(TP *P);

float P_ControllerAngle(TP *P);

#endif /* INC_PID_CONTROLLER_H_ */

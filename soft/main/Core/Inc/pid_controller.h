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




#define MOTOR_Kp					0.035
#define MOTOR_Ki					0.0016
#define MOTOR_Kd					0.0002
#define MOTOR_ANTI_WINDUP		     200


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

	float Set_Speed_Rad_per_Sec;

	float anti_windup_limit;
}TPid;

void PID_Init(TPid *pid, float kp, float ki, float kd, float anti_windup_limit);


#endif /* INC_PID_CONTROLLER_H_ */

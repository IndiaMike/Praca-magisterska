/*
 * pid_controller.h
 *
 *  Created on: 10 maj 2022
 *      Author: grzes
 */

#ifndef INC_PID_CONTROLLER_H_
#define INC_PID_CONTROLLER_H_

#include "main.h"

#define MOTOR_A_Kp					4.5
#define MOTOR_A_Ki					0.8
#define MOTOR_A_Kd					0.5
#define MOTOR_A_ANTI_WINDUP		   1000

typedef struct
{
	int previous_error;
	int total_error;

	//controllers gains
	float Kp;
	float Ki;
	float Kd;

	float Set_Speed_MM_per_Sec;

	int anti_windup_limit;
}TPID_Controller;

#endif /* INC_PID_CONTROLLER_H_ */

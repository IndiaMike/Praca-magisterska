/*
 * pid_controller.h
 *
 *  Created on: 10 maj 2022
 *      Author: grzes
 */

#ifndef INC_PID_CONTROLLER_H_
#define INC_PID_CONTROLLER_H_

#include "main.h"




#define MOTOR_1_Kp					2.5
#define MOTOR_1_Ki					0.0
#define MOTOR_1_Kd					0.0
#define MOTOR_1_ANTI_WINDUP		   10


typedef struct
{
	int previous_error;
	int total_error;

	//controllers gains
	float Kp;
	float Ki;
	float Kd;

	float Set_Speed_Rad_per_Sec;

	int anti_windup_limit;
}TPid;


#endif /* INC_PID_CONTROLLER_H_ */

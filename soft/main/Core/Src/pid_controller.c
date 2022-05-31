/*
 * pid_controller.c
 *
 *  Created on: 10 maj 2022
 *      Author: grzes
 */

#include "pid_controller.h"

void PID_Init(TPid *pid, float kp, float ki, float kd)
{
	pid->Kp = kp;
	pid->Ki = ki;
	pid->Kd = kd;


}






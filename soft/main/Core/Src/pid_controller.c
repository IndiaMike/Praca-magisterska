/*
 * pid_controller.c
 *
 *  Created on: 10 maj 2022
 *      Author: grzes
 */

#include "pid_controller.h"







void PID_Init(TPid *Pid, float kp_init, float ki_init, float kd_init, int anti_windup_limit_init)
{

	Pid->previous_error = 0;
	Pid->total_error	= 0;

	Pid->Kp = kp_init;
	Pid->Ki = ki_init;
	Pid->Kd = kd_init;

	Pid->anti_windup_limit = anti_windup_limit_init;

}

void PID_Reset(TPid *PID)
{
	PID->previous_error = 0;
	PID->total_error	= 0;
}

int PID_Calculate(TPid *PID, int setpoint, int process_variable)
{
	int error;
	float p_term, i_term, d_term;

	error = setpoint - process_variable;
	PID->total_error += error;

	p_term = (float)(PID->Kp * error);
	i_term = (float)(PID->Ki * PID->total_error);
	d_term = (float)(PID->Kd * error - PID->previous_error);

	if(i_term >= PID->anti_windup_limit) i_term = PID->anti_windup_limit;
	else if(i_term <= -PID->anti_windup_limit) i_term = - PID->anti_windup_limit;


	PID->previous_error = error;
	return(int)(p_term + i_term + d_term);

}

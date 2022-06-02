/*
 * pid_controller.c
 *
 *  Created on: 10 maj 2022
 *      Author: grzes
 */

#include "pid_controller.h"
#include "motor_encoder.h"


void PID_Init(TPid *pid, float kp, float ki, float kd, float anti_windup_limit)
{
	pid->Kp = kp;
	pid->Ki = ki;
	pid->Kd = kd;
	pid->anti_windup_limit = anti_windup_limit;

	pid->previous_error = 0.0f;
	pid->total_error = 0.0f;
	pid->Set_Value = 0.0f;
	pid->out = 0.0f;

}

void PID_Controller(TPid *pid)
{
	float p_term, i_term, d_term;
	pid->previous_error = pid->error;
	pid->error = pid->Set_Value - pid->Actual_Value;
	pid->total_error += pid->error;

	if(pid->total_error > pid->anti_windup_limit)
	{
		pid->total_error = pid->anti_windup_limit;
	}
	if(pid->total_error < -pid->anti_windup_limit)
	{
		pid->total_error = -pid->anti_windup_limit;
	}
	 p_term = pid->Kp * pid->error;
	 i_term = pid->Ki * pid->total_error * TIME_OF_CALCULATION_CYCLE_MS;
	 d_term = pid->Kd * (pid->error - pid->previous_error) / TIME_OF_CALCULATION_CYCLE_MS;

	pid->out = p_term + i_term + d_term;

	if(pid->out >  1.0f)
		pid->out =  1.0f;
	if(pid->out < -1.0f)
		pid->out = -1.0f;
}



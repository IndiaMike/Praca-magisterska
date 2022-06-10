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
	 i_term = pid->Ki * pid->total_error * DELTA_TIME_S;
	 d_term = pid->Kd * (pid->error - pid->previous_error) / DELTA_TIME_S;

	pid->out = p_term + i_term + d_term;

	if(pid->out >  1.0f)
		pid->out =  1.0f;
	if(pid->out < -1.0f)
		pid->out = -1.0f;
}

void P_Init(TP *P, float kp)
{
	P->Actual_Value = 0.0;
	P->Set_Value = 0.0;
	P->error = 0.0;

	P->Kp = kp;
}
float P_Controller(TP *P)
{
	float out = 0.0;
	P->error = P->Set_Value - P->Actual_Value;
	out = P->Kp * P->error;

	if(out >  1.0f) out =  1.0f;
	if(out < -1.0f) out = -1.0f;
	return out;
}


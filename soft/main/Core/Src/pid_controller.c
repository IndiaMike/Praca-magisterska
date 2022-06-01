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
	pid->Set_Speed_Rad_per_Sec = 0.0f;
	pid->out = 0.0f;

}

void PID_Controller(TMotor *Motor)
{
	float p_term, i_term, d_term;
	Motor->pid->previous_error = Motor->pid->error;
	Motor->pid->error = Motor->pid->Set_Speed_Rad_per_Sec - Motor->encoder->Actual_Speed_Rad_per_Sec;
	Motor->pid->total_error += Motor->pid->error;

	if(Motor->pid->total_error > Motor->pid->anti_windup_limit)
	{
		Motor->pid->total_error = Motor->pid->anti_windup_limit;
	}
	if(Motor->pid->total_error < -Motor->pid->anti_windup_limit)
	{
		Motor->pid->total_error = -Motor->pid->anti_windup_limit;
	}
	 p_term = Motor->pid->Kp * Motor->pid->error;
	 i_term = Motor->pid->Ki * Motor->pid->total_error * TIME_OF_CALCULATION_CYCLE_MS;
	 d_term = Motor->pid->Kd * (Motor->pid->error - Motor->pid->previous_error) / TIME_OF_CALCULATION_CYCLE_MS;

	Motor->pid->out = p_term + i_term + d_term;

	if(Motor->pid->out >  1.0f)
		Motor->pid->out =  1.0f;
	if(Motor->pid->out < -1.0f)
		Motor->pid->out = -1.0f;
	MOTOR_Set_Speed(Motor);
}





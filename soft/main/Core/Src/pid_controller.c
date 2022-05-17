/*
 * pid_controller.c
 *
 *  Created on: 10 maj 2022
 *      Author: grzes
 */
#include "main.h"
#include "motor_encoder.h"
#include "pid_controller.h"
extern TMotor MOTOR_Front_Left_1;

/**
  * @brief  This function is for TIM11 Callback 10Hz cyclic interrupt for e.g. wheel speed calculation
  *
  */
void HAL_TIM_OC_DelayElapsedCallback(TIM_HandleTypeDef *htim)
{
	if(htim->Instance == TIM11 )
	{
		if(htim->Channel == HAL_TIM_ACTIVE_CHANNEL_1)
		{
			ENCODER_Speed_Calculate(&MOTOR_Front_Left_1);


		}


	}
}

void PID_Init(TPID_Controller *PID, float kp_init, float ki_init, float kd_init, int anti_windup_limit_init)
{
	PID->Kp = kp_init;
	PID->Ki = ki_init;
	PID->Kd = kd_init;

	PID->anti_windup_limit = anti_windup_limit_init;

}

void PID_Reset(TPID_Controller *PID)
{
	PID->previous_error = 0;
	PID->total_error	= 0;
}

int PID_Calculate(TPID_Controller *PID, int setpoint, int process_variable)
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

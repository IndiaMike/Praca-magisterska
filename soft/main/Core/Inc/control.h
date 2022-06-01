/*
 * control.h
 *
 *  Created on: 1 cze 2022
 *      Author: grzes
 */

#ifndef INC_CONTROL_H_
#define INC_CONTROL_H_

#include "main.h"
#include <stdbool.h>
#include "motor_encoder.h"

typedef struct
{
	bool 	 isPidOn;
	uint32_t distance;
	uint16_t angle;
	TMotor 	 Motors[4];
}TRobot;

void ROBOT_Init(TRobot *R);
void ROBOT_Stop(TRobot *R);
void ROBOT_Go(TRobot *R, float Speed);
#endif /* INC_CONTROL_H_ */

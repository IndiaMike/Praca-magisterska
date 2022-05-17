#ifndef _MYFUN
#define _MYFUN
#include <stm32f4xx.h>
#include <stm32f407xx.h>

typedef struct
{
	uint32_t 	posEncoder;
	double 		currentSpeed;
	float 		setPos;
}sMotor;

typedef struct
{
	sMotor	motors[4];
}sControl;

#endif

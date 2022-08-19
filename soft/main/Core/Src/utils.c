/*
 * utils.c
 *
 *  Created on: 15 sie 2022
 *      Author: grzes
 */
#include "main.h"
#include "string.h"
#include "usart.h"
#include "control.h"

extern uint16_t AdcValue[20];


void UartLog(char * Message)
{
	HAL_UART_Transmit(&huart1, (uint8_t*)Message, strlen(Message), 1000);
}


static uint16_t interrupt_counter = 0;
void RareInterrupt(void)
{
	interrupt_counter++;
		if(interrupt_counter > 200)
		{
			BATERRYLowVoltageProtect(&AdcValue);
			interrupt_counter = 0;
		}
}

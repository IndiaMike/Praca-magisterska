/*
 * utils.c
 *
 *  Created on: 15 sie 2022
 *      Author: grzes
 */
#include "main.h"
#include "string.h"
#include "usart.h"



void UartLog(char * Message)
{
	HAL_UART_Transmit(&huart1, (uint8_t*)Message, strlen(Message), 1000);
}


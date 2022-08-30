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
extern TRobot R;
extern  uint8_t is_communication_start_flag;

void UartLog(char * Message)
{
	HAL_UART_Transmit(&huart1, (uint8_t*)Message, strlen(Message), 1000);
}


static uint16_t interrupt_counter = 0;
void RareInterrupt(void)
{
	char Message[32];
	interrupt_counter++;
		if(interrupt_counter > 1000)
		{
			BATTERYLowVoltageProtect(&AdcValue);
			interrupt_counter = 0;
		}
		if((interrupt_counter%100==0)  && (is_communication_start_flag ==1))
		{
			sprintf(Message, "Cell# %d, %d, %d, ", R.Cell_X_anctual, R.Cell_Y_anctual,(int)( R.actual_angle));
			UartLog(Message);
		}

}

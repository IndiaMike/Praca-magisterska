/*
 * parser.c
 *
 *  Created on: 15 sie 2022
 *      Author: grzes
 */
#include "main.h"
#include "ring_buffer.h"
#include "parser.h"
#include "user_interface.h"
#include "string.h"
#include "utils.h"

extern  TLed LED_1_GREEN;
extern  TLed LED_2_GREEN;

void Parser_TakeLine(RingBuffer_t *Buf, uint8_t *Destination)
{
	uint8_t Tmp;
	uint8_t i = 0;

	// Loop for every char in Ring Buffer
	do
	{
		// Read a one byte from Ring Buffer
		RB_Read(Buf, &Tmp);

		// Check if we take the endline char
		if(Tmp == ENDLINE)
		{
			// If endline - replace it with c-string end sign - 0x00
			Destination[i] = 0;
		}
		else
		{
			// If not endline - just write to work-buffer
			Destination[i] = Tmp;
		}

		i++; // increment array iterator
	}while(Tmp != ENDLINE); // If we hit the endline char - end the loop
}

void Parser_Parse(uint8_t *DataToParse)
{




	// Compare provided array with line to parse with command template
	if(strcmp("LED_ON", (char*)DataToParse) == 0)
	{
		LED_OnOff(&LED_1_GREEN,LED_ON);
		UartLog("LED On");
	}
	// Next command template
	else if(strcmp("LED_OFF", (char*)DataToParse) == 0)
	{
		LED_OnOff(&LED_1_GREEN,LED_OFF);
		UartLog("LED Off");
	}
}


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
#include "stdio.h"
#include "stdlib.h"
#include "control.h"

extern  TLed LED_1_GREEN;
extern  TLed LED_2_GREEN;
extern	TRobot R;


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

static void Parser_ParseLED(void)
{
	// String to parse:
	// 	0
	// 	1

	// Pointer to sub-string
	char *ParsePointer = strtok(NULL, ",");

	if(strlen(ParsePointer) > 0) // Check if sunstring exists
	{
		if(ParsePointer[0] < '0' || ParsePointer[0] > '1') // Check if allowed char is in command parameter
		{
			UartLog("LED wrong value. Please type 0 or 1!\r\n");
			return; // return from function if error
		}

		// Check what to do
		if(ParsePointer[0] == '1')
		{
			LED_OnOff(&LED_1_GREEN, LED_ON);
			UartLog("LED On\r\n");
		}
		else if (ParsePointer[0] == '0')
		{
			LED_OnOff(&LED_1_GREEN, LED_OFF);
			UartLog("LED Off\r\n");
		}
	}
}

// Parsing function for POINT command
// P=
//     X,Y,Z
static void Parser_ParsePOINT(void)
{
	// String to parse:
	// X,Y,Z - floats

	uint8_t i, j; // Iterators
	float PointParameters[3]; // Array for each parameter
	char Message[32]; // Return log message

	char *ParsePointer = strtok(NULL, ",");
	if(strcmp("?", ParsePointer) == 0) // Check if someone asked for our name
		{
			sprintf(Message, "My position P=%.1f,%.1f,%.1f,", R.X,R.Y,R.actual_angle); // Just return the name
			UartLog(Message);
		}
	else
	{
		for(i = 0; i < 3; i++) // For each of parameters
			{
				 // Cut a sub-string



				if(strlen(ParsePointer) > 0) // Check if sub-string exists
				{
					// X.XX <- i = 0
					// Y.YY <- i = 1
					// Z.ZZ <- i = 2 angle

					for(j = 0; ParsePointer[j] != 0; j++) // Check if only allowed chars are in sub-string
					{
						if((ParsePointer[j] < '0' || ParsePointer[j] > '9') && ParsePointer[j] != '.')
						{
							UartLog("POINT wrong value. Don't use letters dude!\r\n");
							return;
						}
					}

					PointParameters[i] = atof(ParsePointer); // Create a float from the sub-string
				}
				else
				{
					UartLog("POINT too less values. P=X,Y,Z\\n\r\n");
					return;
				}
	}
		// Reaction - Send to log received values
		ROBOT_Set_Point(&R, PointParameters[0], PointParameters[1], PointParameters[2]);
		sprintf(Message, "Point P= %.1f, %.1f, %.1f,  \r\n", R.Set_X, R.Set_Y, R.Set_angle);
		UartLog(Message);
	}



}



static void Parser_ParseHELP(void)
{
	char Message[64]; // Return log message
	UartLog("Possibility comands:\n\r");

	sprintf(Message, "LED={1-0};\n\r");
	UartLog(Message);

	sprintf(Message, "P=X.X,Y.Y,a.a;\n\r");
	UartLog(Message);
}

static void Parser_ParseGO2P(void)
{
	R.isMotorsPidOn = true;
}

void Parser_Parse(uint8_t *DataToParse)
{
	// Pointer to sub-string
		char *ParsePointer = strtok((char*)DataToParse, "="); // Create a sub-string

		// Compare provided array with line to parse with command template
		if(strcmp("LED", ParsePointer) == 0)
		{
			Parser_ParseLED(); // Call a parsing function for the LED command
		}
		else if(strcmp("P", ParsePointer) == 0)
		{
			Parser_ParsePOINT(); // Call a parsing function for the ENV command
		}
		else if(strcmp("HELP", ParsePointer) == 0)
		{
			Parser_ParseHELP(); // Call a parsing function for the NAME command
		}

		else if(strcmp("GO2P", ParsePointer) == 0)
		{
			Parser_ParseGO2P();
		}
		else if(strcmp("STOP", ParsePointer) == 0)
		{
			ROBOT_Stop(&R);
		}
		else
		{
			Parser_ParseHELP();
		}
}


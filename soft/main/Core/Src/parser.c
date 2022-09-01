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
#include "sensor_map.h"

extern  TLed LED_1_GREEN;
extern  TLed LED_2_GREEN;
extern	TLed LED_3_YELLOW;
extern	TLed LED_4_RED;

extern	TRobot R;
extern int pathTable[32][3];
extern int pathCounter;
extern int pathStep;

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
			UartLog("LED wrong value. Please type 0 or 1!");
			return; // return from function if error
		}

		// Check what to do
		if(ParsePointer[0] == '1')
		{
			LED_OnOff(&LED_1_GREEN, LED_ON);
			LED_OnOff(&LED_2_GREEN, LED_ON);
			LED_OnOff(&LED_3_YELLOW, LED_ON);
			LED_OnOff(&LED_3_YELLOW, LED_ON);
			BUZZER_On();
		}
		else if (ParsePointer[0] == '0')
		{
			LED_OnOff(&LED_1_GREEN, LED_OFF);
			LED_OnOff(&LED_2_GREEN, LED_OFF);
			LED_OnOff(&LED_3_YELLOW, LED_OFF);
			LED_OnOff(&LED_3_YELLOW, LED_OFF);
			BUZZER_Off();
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


		for(i = 0; i < 3; i++) // For each of parameters
			{

				 // Cut a sub-string
			char *ParsePointer = strtok(NULL, ","); // Cut a sub-string

			if(strcmp("?", ParsePointer) == 0) // Check if someone asked for our name
				{
					sprintf(Message, "My position P=%.1f,%.1f,%.1f,", R.X,  R.Y,  R.actual_angle); // Just return the name
					UartLog(Message);
					return;
				}

				if(strlen(ParsePointer) > 0) // Check if sub-string exists
				{
					// X.XX <- i = 0
					// Y.YY <- i = 1
					// Z.ZZ <- i = 2 angle

					for(j = 0; ParsePointer[j] != 0; j++) // Check if only allowed chars are in sub-string
					{
						if((ParsePointer[j] < '0' || ParsePointer[j] > '9') && ParsePointer[j] != '.' && ParsePointer[j] != '-')
						{
							UartLog("POINT wrong value. Don't use letters dude!");
							return;
						}
					}

					PointParameters[i] = atof(ParsePointer); // Create a float from the sub-string
				}
				else
				{
					UartLog("POINT too less values. P=X,Y,Z");
					return;
				}
			}
		// Reaction - Send to log received values
		ROBOT_Set_Point(&R, PointParameters[0], PointParameters[1], PointParameters[2]);
		R.isG2PControllerEN = true;
		sprintf(Message, "Set Point P= %.1f, %.1f, %.1f, ", R.Set_X, R.Set_Y, R.Set_angle);
		UartLog(Message);




}


static void Parser_ParsePATH(void)
{
	// String to parse:
	// X,Y,Z - floats

	uint8_t i, j; // Iterators
	int PointParameters[3]; // Array for each parameter
	char Message[32]; // Return log message


		for(i = 0; i < 3; i++) // For each of parameters
			{

				 // Cut a sub-string
			char *ParsePointer = strtok(NULL, ","); // Cut a sub-string


				if(strlen(ParsePointer) > 0) // Check if sub-string exists
				{
					// X.XX <- i = 0
					// Y.YY <- i = 1
					// Z.ZZ <- i = 2 angle

					for(j = 0; ParsePointer[j] != 0; j++) // Check if only allowed chars are in sub-string
					{
						if((ParsePointer[j] < '0' || ParsePointer[j] > '9') && ParsePointer[j] != '.' && ParsePointer[j] != '-')
						{
							UartLog("POINT wrong value. Don't use letters dude!");
							return;
						}
					}

					PointParameters[i] = atoi(ParsePointer); // Create a float from the sub-string
					pathCounter = PointParameters[0];
					pathTable[pathCounter][i] = PointParameters[i];
				}
				else
				{
					UartLog("POINT too less values. Path=X,Y,;");
					return;
				}

			}
		// Reaction - Send to log received values


		sprintf(Message, "R->Path[%.1d]=%.1d,%.1d,\n\r", pathTable[pathCounter][0], pathTable[pathCounter][1], pathTable[pathCounter][2]);

		UartLog(Message);
		sprintf(Message, " ");
		UartLog(Message);




}
static void Parter_Path_GO(void)
{

	uint8_t  j; // Iterators
		int PointParameters; // Array for each parameter
		char Message[32]; // Return log message




					 // Cut a sub-string
				char *ParsePointer = strtok(NULL, ","); // Cut a sub-string

					if(strlen(ParsePointer) > 0) // Check if sub-string exists
					{


						for(j = 0; ParsePointer[j] != 0; j++) // Check if only allowed chars are in sub-string
						{
							if((ParsePointer[j] < '0' || ParsePointer[j] > '9') && ParsePointer[j] != '.' && ParsePointer[j] != '-')
							{
								UartLog("POINT wrong value. Don't use letters dude!");
								return;
							}
						}

						PointParameters = atoi(ParsePointer); // Create a float from the sub-string
					}
					else
					{
						UartLog("wrong Path Go");
						return;
					}


			//sprintf(Message, "R->GoPath=%d", PointParameters);
			//UartLog(Message);
			R.isPathModeEN = true;
 			pathCounter = PointParameters;
			pathStep = 0;

}

static void Parser_ParseHELP(void)
{
	char Message[64]; // Return log message
	UartLog("\n\rPossibility commands:\n\r");

	sprintf(Message, "LED={1-0};\n\r");
	UartLog(Message);

	sprintf(Message, "P=X.X,Y.Y,a.a;\n\r");
	UartLog(Message);

	sprintf(Message, "P=?;\n\r");
	UartLog(Message);

	sprintf(Message, "MotorON;\n\r");
	UartLog(Message);

	sprintf(Message, "STOP;\n\r");
	UartLog(Message);

	sprintf(Message, "HomeHere;\n\r");
	UartLog(Message);

	sprintf(Message, "ModeM;\n\r");
	UartLog(Message);

	sprintf(Message, "ModeG2P;\n\r");
	UartLog(Message);

	sprintf(Message, "IN MANUAL MODE ONLY!\n\r");
	UartLog(Message);
	sprintf(Message, "GoW, GoS, GoA, GoD, Speed0;\n\r");
	UartLog(Message);

}

static void Parser_ParseMotorON(void)
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
		else if(strcmp("W0", ParsePointer) == 0)
		{
			COMUNICATION_Watchdog_Reset();
		}
		else if(strcmp("P", ParsePointer) == 0)
		{
			Parser_ParsePOINT(); // Call a parsing function for the ENV command
		}
		else if(strcmp("HELP", ParsePointer) == 0)
		{
			Parser_ParseHELP(); // Call a parsing function for the NAME command
		}

		else if(strcmp("MotorON", ParsePointer) == 0)
		{
			Parser_ParseMotorON();
		}
		else if(strcmp("STOP", ParsePointer) == 0)
		{
			ROBOT_Stop(&R);
		}

		else if(strcmp("GoW", ParsePointer) == 0)
		{
			ROBOT_Manual(dW);
		}
		else if(strcmp("GoS", ParsePointer) == 0)
		{
			ROBOT_Manual(dS);
		}
		else if(strcmp("GoA", ParsePointer) == 0)
		{
			ROBOT_Manual(dA);
		}
		else if(strcmp("GoD", ParsePointer) == 0)
		{
			ROBOT_Manual(dD);
		}
		else if(strcmp("Speed0", ParsePointer) == 0)
		{
			ROBOT_Manual(dSpeed0);
		}
		else if(strcmp("HomeHere", ParsePointer) == 0)
		{
			ROBOT_HomeIsHere();
		}
		else if(strcmp("ModeM", ParsePointer) == 0)
		{
			ROBOT_Set_Mode(Manual_Mode);
		}
		else if(strcmp("ModeG2P", ParsePointer) == 0)
		{
			ROBOT_Set_Mode(Go2Point_Mode);
		}
		else if(strcmp("Path", ParsePointer) == 0)
		{
			Parser_ParsePATH();
		}
		else if(strcmp("PathGO", ParsePointer) == 0)
		{
			Parter_Path_GO();
		}
		else if(strcmp("Map", ParsePointer) == 0)
		{
			MAP_Check_Obstacles();
		}
		/*else
		{
			Parser_ParseHELP();
		}*/
}


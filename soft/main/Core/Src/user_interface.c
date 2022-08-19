/*
 * user_interface.c
 *
 *  Created on: Apr 21, 2022
 *      Author: grzes
 */
#include "main.h"
#include "user_interface.h"
#include "control.h"

extern  TLed LED_1_GREEN;
extern  TLed LED_2_GREEN;
extern  TLed LED_3_YELLOW;
extern  TLed LED_4_RED;

extern TRobot R;

static uint32_t lastTick_Heart=0;	// zmienne pomocnicze do timera softwarowego /Static aby nie były widoczne na zewnątrz
static uint32_t lastTick_Buzzer=0;  // zmienne pomocnicze do timera softwarowego /Static aby nie były widoczne na zewnątrz

void LEDs_test(TLed Led_1, TLed Led_2, TLed Led_3, TLed Led_4)
{
	for(uint8_t i=0; i<5; i++){
		LED_OnOff(&Led_1, LED_ON);
		LED_OnOff(&Led_2, LED_ON);
		LED_OnOff(&Led_3, LED_ON);
		LED_OnOff(&Led_4, LED_ON);

		HAL_Delay(100);

		LED_OnOff(&Led_1, LED_OFF);
		LED_OnOff(&Led_2, LED_OFF);
		LED_OnOff(&Led_3, LED_OFF);
		LED_OnOff(&Led_4, LED_OFF);

		HAL_Delay(100);
	}


}
void LEDs_Init(TLed *Led, GPIO_TypeDef* GpioPort, uint16_t GpioPin)
{
	Led->GpioPort 	= GpioPort;
	Led->GpioPin	= GpioPin;
	Led->State		= LED_OFF;
}
void LED_OnOff(TLed *Led, Led_State state)
{
	if(state == LED_OFF)
	HAL_GPIO_WritePin(Led->GpioPort, Led->GpioPin,GPIO_PIN_SET);

	else if(state == LED_ON)
	HAL_GPIO_WritePin(Led->GpioPort, Led->GpioPin,GPIO_PIN_RESET);
}

void LED_Heart(TLed *Led, uint32_t time_ms)
{
	if(HAL_GetTick() - lastTick_Heart > time_ms)
	{
		HAL_GPIO_TogglePin(Led->GpioPort,Led->GpioPin);
		lastTick_Heart = HAL_GetTick();
	}
}

Button_state BUTTON_Read(void)
{
	Button_state  state = Button_Null;

	if(GPIO_PIN_RESET == HAL_GPIO_ReadPin(BUTTON_1_GPIO_Port,BUTTON_1_Pin) )
	{
		state = Left;
	}

	if(GPIO_PIN_RESET == HAL_GPIO_ReadPin(BUTTON_2_GPIO_Port,BUTTON_2_Pin))
	{
		state = Center;
	}

	if(GPIO_PIN_RESET == HAL_GPIO_ReadPin(BUTTON_3_GPIO_Port,BUTTON_3_Pin))
	{
		state = Right;
	}


	return state;
}

void BUTTON_LEDS_Test(void)
{
	 if(Left == BUTTON_Read())
		LED_OnOff(&LED_1_GREEN, LED_ON);

	 if(Center == BUTTON_Read())
		LED_OnOff(&LED_2_GREEN, LED_ON);

	 if(Right == BUTTON_Read())
		LED_OnOff(&LED_4_RED, LED_ON);

	 if(Button_Null == BUTTON_Read())
	   {
		  LED_OnOff(&LED_1_GREEN, LED_OFF);
		  LED_OnOff(&LED_2_GREEN, LED_OFF);
		  LED_OnOff(&LED_4_RED, LED_OFF);
	   }
}

void BUZZER_On(void)
{
	  HAL_GPIO_WritePin(BUZZER_GPIO_Port, BUZZER_Pin, GPIO_PIN_RESET);
}

void BUZZER_Off(void)
{
	  HAL_GPIO_WritePin(BUZZER_GPIO_Port, BUZZER_Pin, GPIO_PIN_SET);
}

void BUZZER_Impulse_Blocked(uint8_t Number_of_impulse, uint8_t cycle_time)
{
	for(uint8_t i=Number_of_impulse; i>0; i--)
	{
		BUZZER_On();
		HAL_Delay(cycle_time);
		BUZZER_Off();
		HAL_Delay(cycle_time);
	}
}
void BATERRYLowVoltageProtect(uint16_t *AdcValue)
{

	float tmp, voltage;
	for(int i=0; i<20;i++)
		{
			tmp +=(AdcValue[i] );
		}
		tmp/=20;
		voltage = 4096.0/3.3 * tmp;
	if (voltage > 14.2)
	{
		LED_OnOff(&LED_4_RED, LED_OFF);
		LED_OnOff(&LED_2_GREEN, LED_OFF);
		BUZZER_Off();
	}


	else if(voltage< 14.2 &&  voltage>= 12.5)
	{
		LED_OnOff(&LED_4_RED, LED_ON);
		LED_OnOff(&LED_2_GREEN, LED_ON);
		BUZZER_Off();
	}


	else if(voltage<12.5)
	{
		BUZZER_On();
		ROBOT_Stop(&R);
	}
}

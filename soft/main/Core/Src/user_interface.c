/*
 * user_interface.c
 *
 *  Created on: Apr 21, 2022
 *      Author: grzes
 */
#include "main.h"
#include "user_interface.h"


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

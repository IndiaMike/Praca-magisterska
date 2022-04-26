/*
 * user_interface.h
 *
 *  Created on: Apr 21, 2022
 *      Author: grzes
 */

#ifndef INC_USER_INTERFACE_H_
#define INC_USER_INTERFACE_H_




typedef enum
{
	LED_OFF = 0, LED_ON, LED_TOGGLE, LED_BLINK
}Led_State;


typedef struct led_struct
{
	Led_State		State;
	GPIO_TypeDef	*GpioPort;
	uint16_t		GpioPin;

}TLed;



//functions//
void LEDs_Init(TLed *Led, GPIO_TypeDef* GpioPort, uint16_t GpioPin);
//LED_ON/ OFF
void LED_OnOff(TLed *Led, Led_State);
void LEDs_test();

#endif /* INC_USER_INTERFACE_H_ */

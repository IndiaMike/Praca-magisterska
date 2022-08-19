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

typedef enum
{
	Button_Null=0, Left, Center, Right,
}Button_state;



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

void LED_Heart(TLed *Led, uint32_t time_ms);
//BUTTON
Button_state BUTTON_Read(void);
void BUTTON_LEDS_Test(void);

//BUZZER
void BUZZER_On(void);
void BUZZER_Off(void);
void BUZZER_Impulse_Blocked(uint8_t Number_of_impulse, uint8_t cycle_time);

//ADC BATERRY
void BATTERYLowVoltageProtect(float voltage);

#endif /* INC_USER_INTERFACE_H_ */

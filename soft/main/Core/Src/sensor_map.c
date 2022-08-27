/*
 * sensor_map.c
 *
 *  Created on: 25 sie 2022
 *      Author: grzes
 */
#include "main.h"
#include "sensor_map.h"
#include "control.h"


bool meansurement_start_flag = false;





TSensor Sensor_Left_1;
TSensor Sensor_Front_2;
TSensor Sensor_Right_3;
extern TIM_HandleTypeDef htim9;

void SENSORS_Init()
{
	Sensor_Front_2.TrigerSensorGpioPort = SENS_FRONT_T_GPIO_Port;
	Sensor_Front_2.TrigerSensorGpioPin	= SENS_FRONT_T_Pin;

	Sensor_Front_2.EchoSensorGpioPort = SENS_FRONT_E_GPIO_Port;
	Sensor_Front_2.EchoSensorGpioPin	= SENS_FRONT_E_Pin;


	Sensor_Front_2.time = 0;
	Sensor_Front_2.isMeasured = 0;

}

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
  if(GPIO_Pin == Sensor_Front_2.EchoSensorGpioPin)
  {


	  if(GPIO_PIN_SET==(HAL_GPIO_ReadPin(Sensor_Front_2.EchoSensorGpioPort, Sensor_Front_2.EchoSensorGpioPin)))
	  {
		  //timer distance sensors only
		   TIM9->CNT = 0;
		  HAL_TIM_OC_Start(&htim9,TIM_CHANNEL_1);


	  }


	  if(GPIO_PIN_RESET==(HAL_GPIO_ReadPin(Sensor_Front_2.EchoSensorGpioPort, Sensor_Front_2.EchoSensorGpioPin)))
	  {
		  Sensor_Front_2.time = TIM9->CNT;
		  HAL_TIM_OC_Stop(&htim9, TIM_CHANNEL_1);
		  Sensor_Front_2.isMeasured = 0;
		  Sensor_Front_2.distance = (float)(Sensor_Front_2.time) / 5.8f;
	  }



  }


}
float MEASURE_distacne(TSensor sensor)
{
	if(sensor.isMeasured == 0)
	{

	}
}

float MEASURE_Trigger(TSensor *sensor)
{
	uint32_t i=0;


	HAL_GPIO_WritePin(sensor->TrigerSensorGpioPort, sensor->TrigerSensorGpioPin, GPIO_PIN_SET);
	HAL_Delay(1);
	HAL_GPIO_WritePin(sensor->TrigerSensorGpioPort, sensor->TrigerSensorGpioPin, GPIO_PIN_RESET);
	sensor->isMeasured = 1;

	while(sensor->isMeasured == 1)
	{

		i++;
		if(i>100000000)
		{
			return -99.0;
		}
	}
	return sensor->distance;

	HAL_TIM_OC_Stop(&htim9, TIM_CHANNEL_1);

}

/*
 * sensor_map.h
 *
 *  Created on: 25 sie 2022
 *      Author: grzes
 */

#ifndef INC_SENSOR_MAP_H_
#define INC_SENSOR_MAP_H_


typedef struct
{
	GPIO_TypeDef 	*EchoSensorGpioPort;
	uint16_t	 	EchoSensorGpioPin;

	GPIO_TypeDef 	*TrigerSensorGpioPort;
	uint16_t	 	TrigerSensorGpioPin;

	uint8_t		isMeasured;
	uint32_t	time;


	float 		distance;
	float		offset;
}TSensor;

void MEASURE_Trigger(TSensor *sensor);
#endif /* INC_SENSOR_MAP_H_ */

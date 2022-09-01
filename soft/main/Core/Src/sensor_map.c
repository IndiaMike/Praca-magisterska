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
extern TRobot R;

void SENSORS_Init()
{

//____________________sensor front______________________________

	Sensor_Front_2.TrigerSensorGpioPort = SENS_FRONT_T_GPIO_Port;
	Sensor_Front_2.TrigerSensorGpioPin	= SENS_FRONT_T_Pin;

	Sensor_Front_2.EchoSensorGpioPort = SENS_FRONT_E_GPIO_Port;
	Sensor_Front_2.EchoSensorGpioPin	= SENS_FRONT_E_Pin;


	Sensor_Front_2.time = 0;
	Sensor_Front_2.isMeasured = 0;
	Sensor_Front_2.offset = 180.0;

//_____________________sensor_left_______________________________

	Sensor_Left_1.TrigerSensorGpioPort = SENS_LEFT_T_GPIO_Port;
	Sensor_Left_1.TrigerSensorGpioPin	= SENS_LEFT_T_Pin;

	Sensor_Left_1.EchoSensorGpioPort = SENS_LEFT_E_GPIO_Port;
	Sensor_Left_1.EchoSensorGpioPin	= SENS_LEFT_E_Pin;


	Sensor_Left_1.time = 0;
	Sensor_Left_1.isMeasured = 0;
	Sensor_Left_1.offset = 140.0;

//_____________________sensor_right_____________________________

	Sensor_Right_3.TrigerSensorGpioPort = SENS_RIGHT_T_GPIO_Port;
	Sensor_Right_3.TrigerSensorGpioPin	= SENS_RIGHT_T_Pin;

	Sensor_Right_3.EchoSensorGpioPort = SENS_RIGHT_E_GPIO_Port;
	Sensor_Right_3.EchoSensorGpioPin	= SENS_RIGHT_E_Pin;


	Sensor_Right_3.time = 0;
	Sensor_Right_3.isMeasured = 0;
	Sensor_Right_3.offset = 140.0;
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
		  Sensor_Front_2.distance = ((float)(Sensor_Front_2.time) / 5.8f) + Sensor_Front_2.offset;
	  }
  }


//___________________________________sensor_left___________________________________________________
  if(GPIO_Pin == Sensor_Left_1.EchoSensorGpioPin)
    {
  	  if(GPIO_PIN_SET==(HAL_GPIO_ReadPin(Sensor_Left_1.EchoSensorGpioPort, Sensor_Left_1.EchoSensorGpioPin)))
  	  {
  		  //timer distance sensors only
  		   TIM9->CNT = 0;
  		  HAL_TIM_OC_Start(&htim9,TIM_CHANNEL_1);


  	  }


  	  if(GPIO_PIN_RESET==(HAL_GPIO_ReadPin(Sensor_Left_1.EchoSensorGpioPort, Sensor_Left_1.EchoSensorGpioPin)))
  	  {
  		Sensor_Left_1.time = TIM9->CNT;
  		  HAL_TIM_OC_Stop(&htim9, TIM_CHANNEL_1);
  		Sensor_Left_1.isMeasured = 0;
  		Sensor_Left_1.distance = ((float)(Sensor_Left_1.time) / 5.8f) +  Sensor_Left_1.offset;
  	  }
    }


  //________________________________sensor_right_____________________________________________________
  if(GPIO_Pin == Sensor_Right_3.EchoSensorGpioPin)
      {
    	  if(GPIO_PIN_SET==(HAL_GPIO_ReadPin(Sensor_Right_3.EchoSensorGpioPort, Sensor_Right_3.EchoSensorGpioPin)))
    	  {
    		  //timer distance sensors only
    		   TIM9->CNT = 0;
    		  HAL_TIM_OC_Start(&htim9,TIM_CHANNEL_1);


    	  }


    	  if(GPIO_PIN_RESET==(HAL_GPIO_ReadPin(Sensor_Right_3.EchoSensorGpioPort, Sensor_Right_3.EchoSensorGpioPin)))
    	  {
    		  Sensor_Right_3.time = TIM9->CNT;
    		  HAL_TIM_OC_Stop(&htim9, TIM_CHANNEL_1);
    		  Sensor_Right_3.isMeasured = 0;
    		  Sensor_Right_3.distance = ((float)(Sensor_Right_3.time) / 5.8f) +Sensor_Right_3.offset;
    	  }
      }



}


void MEASURE_Trigger(TSensor *sensor)
{

	//if(sensor->isMeasured != 1)

		HAL_GPIO_WritePin(sensor->TrigerSensorGpioPort, sensor->TrigerSensorGpioPin, GPIO_PIN_SET);
		HAL_Delay(1);
		HAL_GPIO_WritePin(sensor->TrigerSensorGpioPort, sensor->TrigerSensorGpioPin, GPIO_PIN_RESET);
		sensor->isMeasured = 1;

}
uint32_t mensureTickMs = 0;
uint32_t timeLimitMs =200;
uint32_t startTime =0;
void MEASURE_Sequence(void)
{
	startTime = HAL_GetTick();
	MEASURE_Trigger(&Sensor_Left_1);
	while((Sensor_Left_1.isMeasured == 1) && (HAL_GetTick() - startTime < timeLimitMs)){}

	startTime = HAL_GetTick();
	MEASURE_Trigger(&Sensor_Front_2);
	while((Sensor_Front_2.isMeasured == 1) && (HAL_GetTick() - startTime < timeLimitMs)){}

	startTime = HAL_GetTick();
	MEASURE_Trigger(&Sensor_Right_3);
	while((Sensor_Right_3.isMeasured == 1) && (HAL_GetTick() - startTime < timeLimitMs)){}
}

void MAP_Check_Obstacles()
{
	float X_obstacle=0.0;
	float Y_obstacle=0.0;

	float angleF = R.actual_angle;
	float angleL = R.actual_angle - 90.0;
	float angleR = R.actual_angle + 90.0;

	//deg to rad
	angleF = angleF * PI / 180.0;
	angleL = angleL * PI / 180.0;
	angleR = angleR * PI / 180.0;

	char Message[32];
	MEASURE_Sequence();

	if(Sensor_Front_2.distance < 1300.0 && Sensor_Front_2.distance > 150.0)
	{
		X_obstacle = R.X + (Sensor_Front_2.distance * sin(angleF));
		Y_obstacle = R.Y + (Sensor_Front_2.distance * cos(angleF));

		if(X_obstacle>0)X_obstacle = (X_obstacle + (X_obstacle/2))/	ONE_CELL_DIM;
		else if(X_obstacle<=0)X_obstacle = (X_obstacle - (X_obstacle/2))/	ONE_CELL_DIM;

		if(Y_obstacle>0)Y_obstacle = (Y_obstacle + (Y_obstacle/2))/	ONE_CELL_DIM;
		else if(Y_obstacle<=0)Y_obstacle = (Y_obstacle - (Y_obstacle/2))/	ONE_CELL_DIM;


		sprintf(Message, "FO!P=%d,%d;\n\r",(int)X_obstacle, (int)Y_obstacle);
		UartLog(Message);
		HAL_Delay(80);
		//Obstacle is
	}

	if(Sensor_Left_1.distance < 1300.0 && Sensor_Left_1.distance > 150.0)
	{
		X_obstacle = R.X + (Sensor_Left_1.distance * sin(angleL));
		Y_obstacle = R.Y + (Sensor_Left_1.distance * cos(angleL));
		if(X_obstacle>0)X_obstacle = (X_obstacle + (X_obstacle/2))/	ONE_CELL_DIM;
		else if(X_obstacle<=0)X_obstacle = (X_obstacle - (X_obstacle/2))/	ONE_CELL_DIM;

		if(Y_obstacle>0)Y_obstacle = (Y_obstacle + (Y_obstacle/2))/	ONE_CELL_DIM;
		else if(Y_obstacle<=0)Y_obstacle = (Y_obstacle - (Y_obstacle/2))/	ONE_CELL_DIM;

		sprintf(Message, "LO!P=%d,%d;\n\r", (int)X_obstacle, (int)Y_obstacle);
		UartLog(Message);
		HAL_Delay(80);
		//Obstacle is
	}
	if(Sensor_Right_3.distance < 1300.0 && Sensor_Right_3.distance > 150.0)
	{
		X_obstacle = R.X + (Sensor_Right_3.distance * sin(angleR));
		Y_obstacle = R.Y + (Sensor_Right_3.distance * cos(angleR));
		if(X_obstacle>0)X_obstacle = (X_obstacle + (X_obstacle/2))/	ONE_CELL_DIM;
		else if(X_obstacle<=0)X_obstacle = (X_obstacle - (X_obstacle/2))/	ONE_CELL_DIM;

		if(Y_obstacle>0)Y_obstacle = (Y_obstacle + (Y_obstacle/2))/	ONE_CELL_DIM;
		else if(Y_obstacle<=0)Y_obstacle = (Y_obstacle - (Y_obstacle/2))/	ONE_CELL_DIM;

		sprintf(Message, "RO!P=%d,%d;\n\r", (int)X_obstacle, (int)Y_obstacle);
		UartLog(Message);
		HAL_Delay(80);
		//Obstacle is

	}

}

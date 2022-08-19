/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "adc.h"
#include "dma.h"
#include "tim.h"
#include "usart.h"
#include "gpio.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "user_interface.h"
#include "motor_encoder.h"
#include "control.h"
#include "ring_buffer.h"
#include "parser.h"
#include "utils.h"
//#include "pid_controller.h"

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */
//uart receive
uint8_t uartTmpReceive;
RingBuffer_t RB_receive;

//parser
uint8_t ReceivedLines;
uint8_t ReceivedData[32];



/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_NVIC_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */
	TRobot R;

	TLed LED_1_GREEN;
	TLed LED_2_GREEN;
	TLed LED_3_YELLOW;
	TLed LED_4_RED;

	TMotor MOTOR_Front_Left_1;
	TMotor MOTOR_Front_Right_2;
	TMotor MOTOR_Rear_Left_3;
	TMotor MOTOR_Rear_Right_4;

	TEncoder ENCODER_Motor_1;
	TEncoder ENCODER_Motor_2;
	TEncoder ENCODER_Motor_3;
	TEncoder ENCODER_Motor_4;

	TPid PID_Motor_1;
	TPid PID_Motor_2;
	TPid PID_Motor_3;
	TPid PID_Motor_4;

	uint16_t AdcValue[20];



/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_DMA_Init();
  MX_TIM2_Init();
  MX_TIM1_Init();
  MX_TIM3_Init();
  MX_TIM4_Init();
  MX_TIM5_Init();
  MX_ADC1_Init();
  MX_USART1_UART_Init();
  MX_TIM10_Init();
  MX_USART6_UART_Init();
  MX_TIM11_Init();

  /* Initialize interrupts */
  MX_NVIC_Init();
  /* USER CODE BEGIN 2 */


  BUZZER_On();
  LEDs_Init(&LED_1_GREEN,LED_1_GPIO_Port,LED_1_Pin);
  LEDs_Init(&LED_2_GREEN,LED_2_GPIO_Port,LED_2_Pin);
  LEDs_Init(&LED_3_YELLOW,LED_3_GPIO_Port,LED_3_Pin);
  LEDs_Init(&LED_4_RED,LED_4_GPIO_Port,LED_4_Pin);

  LEDs_test(LED_1_GREEN,LED_2_GREEN,LED_3_YELLOW,LED_4_RED);

  MOTOR_Init(&MOTOR_Front_Left_1, M3INA_GPIO_Port, M3INA_Pin, M3INB_GPIO_Port, M3INB_Pin,
		  &htim5,TIM_CHANNEL_3);

  MOTOR_Init(&MOTOR_Front_Right_2, M2INB_GPIO_Port, M2INB_Pin, M2INA_GPIO_Port,M2INA_Pin,
		  &htim5,TIM_CHANNEL_2);

  MOTOR_Init(&MOTOR_Rear_Right_4, M1INB_GPIO_Port, M1INB_Pin, M1INA_GPIO_Port,M1INA_Pin,
		  &htim5, TIM_CHANNEL_1);

  MOTOR_Init(&MOTOR_Rear_Left_3, M4INA_GPIO_Port,M4INA_Pin,M4INB_GPIO_Port,M4INB_Pin,
		  &htim5, TIM_CHANNEL_4);


  ENCODER_Init(&MOTOR_Front_Left_1, &ENCODER_Motor_1, &htim1);
  ENCODER_Init(&MOTOR_Front_Right_2, &ENCODER_Motor_2, &htim2);
  ENCODER_Init(&MOTOR_Rear_Left_3, &ENCODER_Motor_3, &htim3);
  ENCODER_Init(&MOTOR_Rear_Right_4, &ENCODER_Motor_4, &htim4);


  MOTOR_PID_Connect(&MOTOR_Front_Left_1, &PID_Motor_1);
  MOTOR_PID_Connect(&MOTOR_Front_Right_2, &PID_Motor_2);
  MOTOR_PID_Connect(&MOTOR_Rear_Left_3, &PID_Motor_3);
  MOTOR_PID_Connect(&MOTOR_Rear_Right_4, &PID_Motor_4);

  PID_Init(&PID_Motor_1,MOTOR_Kp, MOTOR_Ki, MOTOR_Kd,  MOTOR_ANTI_WINDUP);
  PID_Init(&PID_Motor_2,MOTOR_Kp, MOTOR_Ki, MOTOR_Kd,  MOTOR_ANTI_WINDUP);
  PID_Init(&PID_Motor_3,MOTOR_Kp, MOTOR_Ki, MOTOR_Kd,  MOTOR_ANTI_WINDUP);
  PID_Init(&PID_Motor_4,MOTOR_Kp, MOTOR_Ki, MOTOR_Kd,  MOTOR_ANTI_WINDUP);


  ROBOT_Init(&R);


  //PID_Init(&MOTOR_Front_Left_1, &PID_Motor_1, 2, 0, 0, 10);

  HAL_TIM_Encoder_Start(&htim1,TIM_CHANNEL_ALL);
  HAL_TIM_Encoder_Start(&htim2,TIM_CHANNEL_ALL);
  HAL_TIM_Encoder_Start(&htim3,TIM_CHANNEL_ALL);
  HAL_TIM_Encoder_Start(&htim4,TIM_CHANNEL_ALL);







   BUZZER_Off();
   //timer 10Hz start
   __HAL_TIM_ENABLE_IT(&htim11,TIM_IT_UPDATE);
   HAL_TIM_OC_Start_IT(&htim11,TIM_CHANNEL_1);
   R.isMotorsPidOn = false;


   //UART WIFI232
   HAL_UART_Receive_IT(&huart1, &uartTmpReceive, 1);


   HAL_ADC_Start_DMA(&hadc1, (uint32_t*) AdcValue, 20);



  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {

/*
		  R.Motors[0].pid->Set_Value = 4.0;
		  R.Motors[1].pid->Set_Value = -4.0;
		  R.Motors[2].pid->Set_Value = 4.0;
		  R.Motors[3].pid->Set_Value = -4.0;
*/



	  if(ReceivedLines > 0)
	  {
		  Parser_TakeLine(&RB_receive, ReceivedData);
		  ReceivedLines--;
		  Parser_Parse(ReceivedData);
	  }



	  if(Right == BUTTON_Read())
	  {
	  //temporary!!!
	  HAL_UART_Transmit(&huart1,"Button test", 11, 1000);
	  HAL_Delay(1000);
	  //end

	  }
	  else if(Left == BUTTON_Read())
	  {
		  R.isMotorsPidOn = true;
	  }
	  else if (Center == BUTTON_Read())
	  {


		  //LIDAR_Set_PWM(30);




	  }
	  else
	  {

	  }

    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
	  LED_Heart(&LED_3_YELLOW,50);
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Configure the main internal regulator output voltage
  */
  __HAL_RCC_PWR_CLK_ENABLE();
  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);
  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSI;
  RCC_OscInitStruct.PLL.PLLM = 8;
  RCC_OscInitStruct.PLL.PLLN = 100;
  RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
  RCC_OscInitStruct.PLL.PLLQ = 4;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV2;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_3) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief NVIC Configuration.
  * @retval None
  */
static void MX_NVIC_Init(void)
{
  /* TIM1_TRG_COM_TIM11_IRQn interrupt configuration */
  HAL_NVIC_SetPriority(TIM1_TRG_COM_TIM11_IRQn, 0, 0);
  HAL_NVIC_EnableIRQ(TIM1_TRG_COM_TIM11_IRQn);
  /* USART1_IRQn interrupt configuration */
  HAL_NVIC_SetPriority(USART1_IRQn, 0, 0);
  HAL_NVIC_EnableIRQ(USART1_IRQn);
}

/* USER CODE BEGIN 4 */
//UART WIFI Callback
void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart)
{
	if(huart->Instance == USART1) // wifi232
	{
		if(RB_OK == RB_Write(&RB_receive,uartTmpReceive))

		   if(uartTmpReceive == ENDLINE)
		   {
			   ReceivedLines++;
		   }
		   HAL_UART_Receive_IT(&huart1, &uartTmpReceive, 1);
	}
}

/**
  * @brief  This function is for TIM11 Callback 100Hz cyclic interrupt for e.g. wheel speed calculation
  *
  */
void HAL_TIM_OC_DelayElapsedCallback(TIM_HandleTypeDef *htim)
{
	if(htim->Instance == TIM11 )
	{
		if(htim->Channel == HAL_TIM_ACTIVE_CHANNEL_1)
		{
			ENCODER_Speed_Calculate(&MOTOR_Front_Left_1);
			ENCODER_Speed_Calculate(&MOTOR_Front_Right_2);
			ENCODER_Speed_Calculate(&MOTOR_Rear_Left_3);
			ENCODER_Speed_Calculate(&MOTOR_Rear_Right_4);

			ROBOT_Calculate(&R);

			//forward, to setpoint PID
			if(R.control_mode == Go2Point_Mode)ROBOT_Go2Point(&R);



			if(true == R.isMotorsPidOn)
			{
				PID_Controller(&PID_Motor_1);
				PID_Controller(&PID_Motor_2);
				PID_Controller(&PID_Motor_3);
				PID_Controller(&PID_Motor_4);

				MOTOR_Set_Speed(&MOTOR_Front_Left_1);
				MOTOR_Set_Speed(&MOTOR_Front_Right_2);
				MOTOR_Set_Speed(&MOTOR_Rear_Left_3);
				MOTOR_Set_Speed(&MOTOR_Rear_Right_4);
			}




		}
	}
}
/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/

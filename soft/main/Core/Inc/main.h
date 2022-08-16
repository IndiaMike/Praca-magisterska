/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
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

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define BUTTON_2_Pin GPIO_PIN_13
#define BUTTON_2_GPIO_Port GPIOC
#define M1INB_Pin GPIO_PIN_2
#define M1INB_GPIO_Port GPIOC
#define M1INA_Pin GPIO_PIN_3
#define M1INA_GPIO_Port GPIOC
#define M1PWM_Pin GPIO_PIN_0
#define M1PWM_GPIO_Port GPIOA
#define M2PWM_Pin GPIO_PIN_1
#define M2PWM_GPIO_Port GPIOA
#define M3PWM_Pin GPIO_PIN_2
#define M3PWM_GPIO_Port GPIOA
#define M4PWM_Pin GPIO_PIN_3
#define M4PWM_GPIO_Port GPIOA
#define ADC_BAT_Pin GPIO_PIN_4
#define ADC_BAT_GPIO_Port GPIOA
#define ENCODER_2_A_Pin GPIO_PIN_5
#define ENCODER_2_A_GPIO_Port GPIOA
#define BUZZER_Pin GPIO_PIN_4
#define BUZZER_GPIO_Port GPIOC
#define BUTTON_3_Pin GPIO_PIN_5
#define BUTTON_3_GPIO_Port GPIOC
#define M2INA_Pin GPIO_PIN_12
#define M2INA_GPIO_Port GPIOB
#define M2INB_Pin GPIO_PIN_13
#define M2INB_GPIO_Port GPIOB
#define M3INA_Pin GPIO_PIN_14
#define M3INA_GPIO_Port GPIOB
#define M3INB_Pin GPIO_PIN_15
#define M3INB_GPIO_Port GPIOB
#define ENCODER_3_A_Pin GPIO_PIN_6
#define ENCODER_3_A_GPIO_Port GPIOC
#define ENCODER_3_B_Pin GPIO_PIN_7
#define ENCODER_3_B_GPIO_Port GPIOC
#define LED_1_Pin GPIO_PIN_8
#define LED_1_GPIO_Port GPIOC
#define LED_2_Pin GPIO_PIN_9
#define LED_2_GPIO_Port GPIOC
#define ENCODER_1_A_Pin GPIO_PIN_8
#define ENCODER_1_A_GPIO_Port GPIOA
#define ENCODER_1_B_Pin GPIO_PIN_9
#define ENCODER_1_B_GPIO_Port GPIOA
#define UART1_WIFI_RX_Pin GPIO_PIN_10
#define UART1_WIFI_RX_GPIO_Port GPIOA
#define UART1_WIFI_TX_Pin GPIO_PIN_15
#define UART1_WIFI_TX_GPIO_Port GPIOA
#define LED_3_Pin GPIO_PIN_10
#define LED_3_GPIO_Port GPIOC
#define LED_4_Pin GPIO_PIN_11
#define LED_4_GPIO_Port GPIOC
#define BUTTON_1_Pin GPIO_PIN_12
#define BUTTON_1_GPIO_Port GPIOC
#define ENCODER_2_B_Pin GPIO_PIN_3
#define ENCODER_2_B_GPIO_Port GPIOB
#define M4INA_Pin GPIO_PIN_4
#define M4INA_GPIO_Port GPIOB
#define M4INB_Pin GPIO_PIN_5
#define M4INB_GPIO_Port GPIOB
#define ENCODER_4_B_Pin GPIO_PIN_6
#define ENCODER_4_B_GPIO_Port GPIOB
#define ENCODER_4_A_Pin GPIO_PIN_7
#define ENCODER_4_A_GPIO_Port GPIOB
#define PWM_LIDAR_Pin GPIO_PIN_8
#define PWM_LIDAR_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/

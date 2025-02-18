/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
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
#include "gui_guider.h"
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
#define KEY_Right_Pin GPIO_PIN_2
#define KEY_Right_GPIO_Port GPIOE
#define KEY_Right_EXTI_IRQn EXTI2_IRQn
#define KEY_Down_Pin GPIO_PIN_3
#define KEY_Down_GPIO_Port GPIOE
#define KEY_Down_EXTI_IRQn EXTI3_IRQn
#define KEY_Left_Pin GPIO_PIN_4
#define KEY_Left_GPIO_Port GPIOE
#define KEY_Left_EXTI_IRQn EXTI4_IRQn
#define KEY_UP_Pin GPIO_PIN_0
#define KEY_UP_GPIO_Port GPIOA
#define KEY_UP_EXTI_IRQn EXTI0_IRQn
#define DHT11_Pin GPIO_PIN_11
#define DHT11_GPIO_Port GPIOG

/* USER CODE BEGIN Private defines */
extern lv_ui* ui;
/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

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
#include "stm32f1xx_hal.h"

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
#define buzzer_Pin GPIO_PIN_13
#define buzzer_GPIO_Port GPIOC
#define USB_D__Pin GPIO_PIN_7
#define USB_D__GPIO_Port GPIOA
#define USB_D_B0_Pin GPIO_PIN_0
#define USB_D_B0_GPIO_Port GPIOB
#define oled_scl_Pin GPIO_PIN_10
#define oled_scl_GPIO_Port GPIOB
#define oled_sda_Pin GPIO_PIN_11
#define oled_sda_GPIO_Port GPIOB
#define CSN_Pin GPIO_PIN_12
#define CSN_GPIO_Port GPIOB
#define CE_Pin GPIO_PIN_8
#define CE_GPIO_Port GPIOA
#define key_right_Pin GPIO_PIN_9
#define key_right_GPIO_Port GPIOA
#define key_left_Pin GPIO_PIN_10
#define key_left_GPIO_Port GPIOA
#define key_down_Pin GPIO_PIN_11
#define key_down_GPIO_Port GPIOA
#define key_up_Pin GPIO_PIN_12
#define key_up_GPIO_Port GPIOA
#define IRQ_Pin GPIO_PIN_15
#define IRQ_GPIO_Port GPIOA
#define key_1_Pin GPIO_PIN_8
#define key_1_GPIO_Port GPIOB
#define key_2_Pin GPIO_PIN_9
#define key_2_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

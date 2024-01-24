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
#include "stm32g4xx_hal.h"

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
#define T_PC13_Pin GPIO_PIN_13
#define T_PC13_GPIO_Port GPIOC
#define T_PC14_Pin GPIO_PIN_14
#define T_PC14_GPIO_Port GPIOC
#define T_PC15_Pin GPIO_PIN_15
#define T_PC15_GPIO_Port GPIOC
#define T_PF0_Pin GPIO_PIN_0
#define T_PF0_GPIO_Port GPIOF
#define T_PF1_Pin GPIO_PIN_1
#define T_PF1_GPIO_Port GPIOF
#define T_PG0_Pin GPIO_PIN_10
#define T_PG0_GPIO_Port GPIOG
#define T_PC0_Pin GPIO_PIN_0
#define T_PC0_GPIO_Port GPIOC
#define T_PC1_Pin GPIO_PIN_1
#define T_PC1_GPIO_Port GPIOC
#define T_PC2_Pin GPIO_PIN_2
#define T_PC2_GPIO_Port GPIOC
#define T_PC3_Pin GPIO_PIN_3
#define T_PC3_GPIO_Port GPIOC
#define T_PA0_Pin GPIO_PIN_0
#define T_PA0_GPIO_Port GPIOA
#define T_PA1_Pin GPIO_PIN_1
#define T_PA1_GPIO_Port GPIOA
#define T_PA2_Pin GPIO_PIN_2
#define T_PA2_GPIO_Port GPIOA
#define T_PA3_Pin GPIO_PIN_3
#define T_PA3_GPIO_Port GPIOA
#define T_PA4_Pin GPIO_PIN_4
#define T_PA4_GPIO_Port GPIOA
#define T_PA5_Pin GPIO_PIN_5
#define T_PA5_GPIO_Port GPIOA
#define T_PA6_Pin GPIO_PIN_6
#define T_PA6_GPIO_Port GPIOA
#define T_PA7_Pin GPIO_PIN_7
#define T_PA7_GPIO_Port GPIOA
#define T_PC4_Pin GPIO_PIN_4
#define T_PC4_GPIO_Port GPIOC
#define T_PC5_Pin GPIO_PIN_5
#define T_PC5_GPIO_Port GPIOC
#define T_PB0_Pin GPIO_PIN_0
#define T_PB0_GPIO_Port GPIOB
#define T_PB1_Pin GPIO_PIN_1
#define T_PB1_GPIO_Port GPIOB
#define T_PB2_Pin GPIO_PIN_2
#define T_PB2_GPIO_Port GPIOB
#define T_PB11_Pin GPIO_PIN_11
#define T_PB11_GPIO_Port GPIOB
#define T_PB12_Pin GPIO_PIN_12
#define T_PB12_GPIO_Port GPIOB
#define T_PB13_Pin GPIO_PIN_13
#define T_PB13_GPIO_Port GPIOB
#define T_PB14_Pin GPIO_PIN_14
#define T_PB14_GPIO_Port GPIOB
#define T_PB15_Pin GPIO_PIN_15
#define T_PB15_GPIO_Port GPIOB
#define T_PC6_Pin GPIO_PIN_6
#define T_PC6_GPIO_Port GPIOC
#define T_PC7_Pin GPIO_PIN_7
#define T_PC7_GPIO_Port GPIOC
#define T_PC8_Pin GPIO_PIN_8
#define T_PC8_GPIO_Port GPIOC
#define T_PC9_Pin GPIO_PIN_9
#define T_PC9_GPIO_Port GPIOC
#define T_PA8_Pin GPIO_PIN_8
#define T_PA8_GPIO_Port GPIOA
#define T_PA9_Pin GPIO_PIN_9
#define T_PA9_GPIO_Port GPIOA
#define T_PA10_Pin GPIO_PIN_10
#define T_PA10_GPIO_Port GPIOA
#define T_PA11_Pin GPIO_PIN_11
#define T_PA11_GPIO_Port GPIOA
#define T_PA12_Pin GPIO_PIN_12
#define T_PA12_GPIO_Port GPIOA
#define T_PA15_Pin GPIO_PIN_15
#define T_PA15_GPIO_Port GPIOA
#define T_PC10_Pin GPIO_PIN_10
#define T_PC10_GPIO_Port GPIOC
#define T_PC11_Pin GPIO_PIN_11
#define T_PC11_GPIO_Port GPIOC
#define T_PC12_Pin GPIO_PIN_12
#define T_PC12_GPIO_Port GPIOC
#define T_PD2_Pin GPIO_PIN_2
#define T_PD2_GPIO_Port GPIOD
#define T_PB3_Pin GPIO_PIN_3
#define T_PB3_GPIO_Port GPIOB
#define T_PB4_Pin GPIO_PIN_4
#define T_PB4_GPIO_Port GPIOB
#define T_PB5_Pin GPIO_PIN_5
#define T_PB5_GPIO_Port GPIOB
#define T_PB6_Pin GPIO_PIN_6
#define T_PB6_GPIO_Port GPIOB
#define T_PB7_Pin GPIO_PIN_7
#define T_PB7_GPIO_Port GPIOB
#define T_PB8_Pin GPIO_PIN_8
#define T_PB8_GPIO_Port GPIOB
#define T_PB9_Pin GPIO_PIN_9
#define T_PB9_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

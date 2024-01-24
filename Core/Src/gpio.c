/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    gpio.c
  * @brief   This file provides code for the configuration
  *          of all used GPIO pins.
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

/* Includes ------------------------------------------------------------------*/
#include "gpio.h"

/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/*----------------------------------------------------------------------------*/
/* Configure GPIO                                                             */
/*----------------------------------------------------------------------------*/
/* USER CODE BEGIN 1 */

/* USER CODE END 1 */

/** Configure pins
*/
void MX_GPIO_Init(void)
{

  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOF_CLK_ENABLE();
  __HAL_RCC_GPIOG_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();
  __HAL_RCC_GPIOD_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOC, T_PC13_Pin|T_PC14_Pin|T_PC15_Pin|T_PC0_Pin
                          |T_PC1_Pin|T_PC2_Pin|T_PC3_Pin|T_PC4_Pin
                          |T_PC5_Pin|T_PC6_Pin|T_PC7_Pin|T_PC8_Pin
                          |T_PC9_Pin|T_PC10_Pin|T_PC11_Pin|T_PC12_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOF, T_PF0_Pin|T_PF1_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(T_PG0_GPIO_Port, T_PG0_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, T_PA0_Pin|T_PA1_Pin|T_PA2_Pin|T_PA3_Pin
                          |T_PA4_Pin|T_PA5_Pin|T_PA6_Pin|T_PA7_Pin
                          |T_PA8_Pin|T_PA9_Pin|T_PA10_Pin|T_PA11_Pin
                          |T_PA12_Pin|T_PA15_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, T_PB0_Pin|T_PB1_Pin|T_PB2_Pin|T_PB11_Pin
                          |T_PB12_Pin|T_PB13_Pin|T_PB14_Pin|T_PB15_Pin
                          |T_PB3_Pin|T_PB4_Pin|T_PB5_Pin|T_PB6_Pin
                          |T_PB7_Pin|T_PB8_Pin|T_PB9_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(T_PD2_GPIO_Port, T_PD2_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : PCPin PCPin PCPin PCPin
                           PCPin PCPin PCPin PCPin
                           PCPin PCPin PCPin PCPin
                           PCPin PCPin PCPin PCPin */
  GPIO_InitStruct.Pin = T_PC13_Pin|T_PC14_Pin|T_PC15_Pin|T_PC0_Pin
                          |T_PC1_Pin|T_PC2_Pin|T_PC3_Pin|T_PC4_Pin
                          |T_PC5_Pin|T_PC6_Pin|T_PC7_Pin|T_PC8_Pin
                          |T_PC9_Pin|T_PC10_Pin|T_PC11_Pin|T_PC12_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);

  /*Configure GPIO pins : PFPin PFPin */
  GPIO_InitStruct.Pin = T_PF0_Pin|T_PF1_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOF, &GPIO_InitStruct);

  /*Configure GPIO pin : PtPin */
  GPIO_InitStruct.Pin = T_PG0_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(T_PG0_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pins : PAPin PAPin PAPin PAPin
                           PAPin PAPin PAPin PAPin
                           PAPin PAPin PAPin PAPin
                           PAPin PAPin */
  GPIO_InitStruct.Pin = T_PA0_Pin|T_PA1_Pin|T_PA2_Pin|T_PA3_Pin
                          |T_PA4_Pin|T_PA5_Pin|T_PA6_Pin|T_PA7_Pin
                          |T_PA8_Pin|T_PA9_Pin|T_PA10_Pin|T_PA11_Pin
                          |T_PA12_Pin|T_PA15_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : PBPin PBPin PBPin PBPin
                           PBPin PBPin PBPin PBPin
                           PBPin PBPin PBPin PBPin
                           PBPin PBPin PBPin */
  GPIO_InitStruct.Pin = T_PB0_Pin|T_PB1_Pin|T_PB2_Pin|T_PB11_Pin
                          |T_PB12_Pin|T_PB13_Pin|T_PB14_Pin|T_PB15_Pin
                          |T_PB3_Pin|T_PB4_Pin|T_PB5_Pin|T_PB6_Pin
                          |T_PB7_Pin|T_PB8_Pin|T_PB9_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

  /*Configure GPIO pin : PtPin */
  GPIO_InitStruct.Pin = T_PD2_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(T_PD2_GPIO_Port, &GPIO_InitStruct);

}

/* USER CODE BEGIN 2 */

/* USER CODE END 2 */

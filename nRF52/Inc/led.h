/*
 * gpio.h
 *
 *  Created on: 2020-7-17
 *      Author: wuliZhao_ch
 */

#ifndef LED_H__
#define LED_H__

#include "nrf_gpio.h"

#define   LED1    17
#define   LED2    18
#define   LED3    19
#define   LED4    20

void LED_Init(void);
void LED_Toggle(uint32_t pin_number);

#endif /* LED_H__ */

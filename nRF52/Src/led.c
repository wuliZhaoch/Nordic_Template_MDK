/*
 * led.c
 *
 *  Created on: 2020-7-17
 *      Author: wuliZhao_ch
 */

#include "led.h"


/**
 * @brief   Function for LED Initialize.
 * @retval  NULL
 */
void LED_Init(void)
{
    nrf_gpio_cfg(LED1, NRF_GPIO_PIN_DIR_OUTPUT, NRF_GPIO_PIN_INPUT_DISCONNECT,
                        NRF_GPIO_PIN_PULLUP, NRF_GPIO_PIN_S0S1, NRF_GPIO_PIN_NOSENSE);

    nrf_gpio_cfg(LED2, NRF_GPIO_PIN_DIR_OUTPUT, NRF_GPIO_PIN_INPUT_DISCONNECT,
                        NRF_GPIO_PIN_PULLUP, NRF_GPIO_PIN_S0S1, NRF_GPIO_PIN_NOSENSE);

    nrf_gpio_cfg(LED3, NRF_GPIO_PIN_DIR_OUTPUT, NRF_GPIO_PIN_INPUT_DISCONNECT,
                        NRF_GPIO_PIN_PULLUP, NRF_GPIO_PIN_S0S1, NRF_GPIO_PIN_NOSENSE);

    nrf_gpio_cfg(LED4, NRF_GPIO_PIN_DIR_OUTPUT, NRF_GPIO_PIN_INPUT_DISCONNECT,
                        NRF_GPIO_PIN_PULLUP, NRF_GPIO_PIN_S0S1, NRF_GPIO_PIN_NOSENSE);
}

/**
 * @brief Function for LED Toggle.
 * @retval  NULL
 */
void LED_Toggle(uint32_t pin_number)
{
    nrf_gpio_pin_toggle(pin_number);
}

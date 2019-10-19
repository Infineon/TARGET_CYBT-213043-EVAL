/*******************************************************************************
* File Name: cycfg_pins.c
*
* Description:
* Pin configuration
* This file was automatically generated and should not be modified.
*
********************************************************************************
* Copyright 2017-2019 Cypress Semiconductor Corporation
* SPDX-License-Identifier: Apache-2.0
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
********************************************************************************/

#include "cycfg_pins.h"

#define BTN_USER_config \
{\
    .gpio = (wiced_bt_gpio_numbers_t*)&platform_gpio_pins[PLATFORM_GPIO_0].gpio_pin, \
    .config = GPIO_INPUT_ENABLE | GPIO_PULL_DOWN | GPIO_INTERRUPT_ENABLE | GPIO_EN_INT_RISING_EDGE, \
    .default_state = GPIO_PIN_OUTPUT_LOW, \
    .button_pressed_value = GPIO_PIN_OUTPUT_HIGH, \
}
#define LED2_config \
{\
    .gpio = (wiced_bt_gpio_numbers_t*)&platform_gpio_pins[PLATFORM_GPIO_4].gpio_pin, \
    .config = GPIO_OUTPUT_ENABLE | GPIO_INPUT_DISABLE, \
    .default_state = GPIO_PIN_OUTPUT_HIGH, \
 }
#define LED1_config \
{\
    .gpio = (wiced_bt_gpio_numbers_t*)&platform_gpio_pins[PLATFORM_GPIO_1].gpio_pin, \
    .config = GPIO_INPUT_ENABLE | GPIO_PULL_DOWN, \
    .default_state = GPIO_PIN_OUTPUT_LOW, \
 }

const wiced_platform_gpio_t platform_gpio_pins[] =
{
	[PLATFORM_GPIO_0] = {WICED_P00, WICED_GPIO},
	[PLATFORM_GPIO_1] = {WICED_P05, WICED_GPIO},
	[PLATFORM_GPIO_2] = {WICED_P10, PUART_cts_0_TRIGGER_IN},
	[PLATFORM_GPIO_3] = {WICED_P11, PUART_rts_0_TRIGGER_IN},
	[PLATFORM_GPIO_4] = {WICED_P27, WICED_GPIO},
	[PLATFORM_GPIO_5] = {WICED_P32, PUART_txd_0_TRIGGER_IN},
	[PLATFORM_GPIO_6] = {WICED_P37, PUART_rxd_0_TRIGGER_IN},
};
const size_t platform_gpio_pin_count = (sizeof(platform_gpio_pins) / sizeof(wiced_platform_gpio_t));
const wiced_platform_led_config_t platform_led[] =
{
	[WICED_PLATFORM_LED_1] = LED1_config,
	[WICED_PLATFORM_LED_2] = LED2_config,
};
const size_t led_count = (sizeof(platform_led) / sizeof(wiced_platform_led_config_t));
const wiced_platform_button_config_t platform_button[] =
{
	[WICED_PLATFORM_BUTTON_1] = BTN_USER_config,
};
const size_t button_count = (sizeof(platform_button) / sizeof(wiced_platform_button_config_t));
const wiced_platform_gpio_config_t platform_gpio[] =
{
};
const size_t gpio_count = (sizeof(platform_gpio) / sizeof(wiced_platform_gpio_config_t));

/*******************************************************************************
* File Name: cycfg_pins.h
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

#if !defined(CYCFG_PINS_H)
#define CYCFG_PINS_H

#include "cycfg_notices.h"
#include "wiced_platform.h"
#include "cycfg_routing.h"

#if defined(__cplusplus)
extern "C" {
#endif

#define BT_ENABLED 1U
#define ioss_0_ENABLED 1U
#define WICED_GET_PIN_FOR_LED(idx) (*(platform_led[(idx)].gpio))
#define WICED_GET_PIN_FOR_BUTTON(idx) (*(platform_button[(idx)].gpio))
#define WICED_GET_PIN_FOR_IO(idx) (*(platform_gpio[(idx)].gpio))
#define BTN_USER_ENABLED 1U
#define BTN_USER WICED_P00
#define PUART_CTS_ENABLED 1U
#define PUART_CTS WICED_P10
#define PUART_RTS_ENABLED 1U
#define PUART_RTS WICED_P11
#define LED2_ENABLED 1U
#define LED2 WICED_P27
#define PUART_TX_ENABLED 1U
#define PUART_TX WICED_P32
#define PUART_RX_ENABLED 1U
#define PUART_RX WICED_P37
#define LED1_ENABLED 1U
#define LED1 WICED_P05
#define UART_ENABLED 1U
#define PUART_ENABLED 1U

extern const wiced_platform_gpio_t platform_gpio_pins[];
extern const size_t platform_gpio_pin_count;
extern const wiced_platform_led_config_t platform_led[];
extern const size_t led_count;
extern const wiced_platform_button_config_t platform_button[];
extern const size_t button_count;
extern const wiced_platform_gpio_config_t platform_gpio[];
extern const size_t gpio_count;


#if defined(__cplusplus)
}
#endif


#endif /* CYCFG_PINS_H */

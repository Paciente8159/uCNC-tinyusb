/*
 * The MIT License (MIT)
 *
<<<<<<<< HEAD:hw/bsp/max32650/boards/max32650fthr/board.h
 * Copyright (c) 2024, Brent Kowal (Analog Devices, Inc)
========
 * Copyright (c) 2020, Ha Thach (tinyusb.org)
>>>>>>>> upstream/master:hw/bsp/espressif/boards/adafruit_feather_esp32s3/board.h
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 * This file is part of the TinyUSB stack.
 */

#ifndef BOARD_H_
#define BOARD_H_
<<<<<<<< HEAD:hw/bsp/max32650/boards/max32650fthr/board.h

#include "gpio.h"
#include "mxc_sys.h"
========
>>>>>>>> upstream/master:hw/bsp/espressif/boards/adafruit_feather_esp32s3/board.h

#ifdef __cplusplus
extern "C" {
#endif

<<<<<<<< HEAD:hw/bsp/max32650/boards/max32650fthr/board.h
// LED
#define LED_PORT        MXC_GPIO1
#define LED_PIN         MXC_GPIO_PIN_14
#define LED_VDDIO       MXC_GPIO_VSSEL_VDDIO
#define LED_STATE_ON    0

// Button
#define BUTTON_PORT         MXC_GPIO1
#define BUTTON_PIN          MXC_GPIO_PIN_19
#define BUTTON_PULL         MXC_GPIO_PAD_WEAK_PULL_UP
#define BUTTON_STATE_ACTIVE 0

// UART Enable for SWD UART Pins. Pin Mux handled by the HAL
#define UART_NUM    0

========
#define NEOPIXEL_PIN          33
#define NEOPIXEL_POWER_PIN    21
#define NEOPIXEL_POWER_STATE  1

#define BUTTON_PIN            0
#define BUTTON_STATE_ACTIVE   0

// SPI for USB host shield
#define MAX3421_SPI_HOST SPI2_HOST
#define MAX3421_SCK_PIN  36
#define MAX3421_MOSI_PIN 35
#define MAX3421_MISO_PIN 37
#define MAX3421_CS_PIN   10
#define MAX3421_INTR_PIN 9
>>>>>>>> upstream/master:hw/bsp/espressif/boards/adafruit_feather_esp32s3/board.h

#ifdef __cplusplus
}
#endif

#endif /* BOARD_H_ */

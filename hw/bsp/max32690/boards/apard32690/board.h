/*
 * The MIT License (MIT)
 *
<<<<<<<< HEAD:hw/bsp/max32690/boards/apard32690/board.h
 * Copyright (c) 2024, Brent Kowal (Analog Devices, Inc)
========
 * Copyright (c) 2020, Ha Thach (tinyusb.org)
>>>>>>>> upstream/master:hw/bsp/espressif/boards/espressif_p4_function_ev/board.h
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
<<<<<<<< HEAD:hw/bsp/max32690/boards/apard32690/board.h

#include "gpio.h"
#include "mxc_sys.h"
========
>>>>>>>> upstream/master:hw/bsp/espressif/boards/espressif_p4_function_ev/board.h

#ifdef __cplusplus
extern "C" {
#endif

<<<<<<<< HEAD:hw/bsp/max32690/boards/apard32690/board.h
// LED
#define LED_PORT        MXC_GPIO2
#define LED_PIN         MXC_GPIO_PIN_1
#define LED_VDDIO       MXC_GPIO_VSSEL_VDDIOH
#define LED_STATE_ON    1

// Button
#define BUTTON_PORT         MXC_GPIO1
#define BUTTON_PIN          MXC_GPIO_PIN_27
#define BUTTON_PULL         MXC_GPIO_PAD_NONE
#define BUTTON_STATE_ACTIVE 1

// UART Enable for UART on ARM SWD Connector
#define UART_NUM 0
========
// #define NEOPIXEL_PIN          48

#define BUTTON_PIN            35
#define BUTTON_STATE_ACTIVE   0

// For CI hardware test, to test both device and host on the same HS port with help of
#define HIL_DEVICE_HOST_MUX_PIN  47
#define HIL_DEVICE_STATE         1
>>>>>>>> upstream/master:hw/bsp/espressif/boards/espressif_p4_function_ev/board.h

#ifdef __cplusplus
}
#endif

#endif /* BOARD_H_ */

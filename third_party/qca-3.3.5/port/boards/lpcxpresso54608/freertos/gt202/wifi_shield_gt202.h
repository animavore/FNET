/*
 * The Clear BSD License
 * Copyright (c) 2017, NXP Semiconductor, Inc.
 * All rights reserved.
 *
 * 
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted (subject to the limitations in the disclaimer below) provided
 *  that the following conditions are met:
 *
 * o Redistributions of source code must retain the above copyright notice, this list
 *   of conditions and the following disclaimer.
 *
 * o Redistributions in binary form must reproduce the above copyright notice, this
 *   list of conditions and the following disclaimer in the documentation and/or
 *   other materials provided with the distribution.
 *
 * o Neither the name of NXP Semiconductor, Inc. nor the names of its
 *   contributors may be used tom  endorse or promote products derived from this
 *   software without specific prior written permission.
 *
 * NO EXPRESS OR IMPLIED LICENSES TO ANY PARTY'S PATENT RIGHTS ARE GRANTED BY THIS LICENSE.
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef __WIFI_SHIELD_GT202_H__
#define __WIFI_SHIELD_GT202_H__

#include "wifi_common.h"
#include "pin_mux.h"

/* This file cannot be included directly in common code, it must pass through "wifi_shield.h" */
#ifndef WIFISHIELD_ENABLED
#   define WIFISHIELD_ENABLED
#else
#   error "Other WiFi shield is already enabled !"
#endif

/* Pinmux function, generated by pinmuxtool */
#define WIFISHIELD_PINMUX_INIT BOARD_InitGT202Shield

/* WLAN_IRQ PINT */
#define WIFISHIELD_WLAN_PINT (kPINT_PinInt0)
#define WIFISHIELD_WLAN_PINT_EDGE (kPINT_PinIntEnableFallEdge)
#define WIFISHIELD_WLAN_PINT_CONNECT (kINPUTMUX_GpioPort1Pin22ToPintsel)
#define WIFISHIELD_WLAN_PINT_IRQ (PIN_INT0_IRQn)

/* WLAN_IRQ signal */
#define WIFISHIELD_WLAN_IRQ_DIRECTION (BOARD_INITGT202SHIELD_IRQ_DIRECTION)
#define WIFISHIELD_WLAN_IRQ_PORT (BOARD_INITGT202SHIELD_IRQ_PORT)
#define WIFISHIELD_WLAN_IRQ_GPIO (BOARD_INITGT202SHIELD_IRQ_GPIO)
#define WIFISHIELD_WLAN_IRQ_PIN (BOARD_INITGT202SHIELD_IRQ_GPIO_PIN)
#define WIFISHIELD_WLAN_IRQ_CLOCKSRC (kCLOCK_Gpio1)

/* WLAN_PWRON (PWRDWN) signal */
#define WIFISHIELD_WLAN_PWRON_DIRECTION (BOARD_INITGT202SHIELD_PWRON_DIRECTION)
#define WIFISHIELD_WLAN_PWRON_PORT (BOARD_INITGT202SHIELD_PWRON_PORT)
#define WIFISHIELD_WLAN_PWRON_GPIO (BOARD_INITGT202SHIELD_PWRON_GPIO)
#define WIFISHIELD_WLAN_PWRON_PIN (BOARD_INITGT202SHIELD_PWRON_GPIO_PIN)
#define WIFISHIELD_WLAN_PWRON_CLOCKSRC (kCLOCK_Gpio4)

/* SPI settings */
#define WIFISHIELD_SPI (SPI9)
#define WIFISHIELD_SPI_INIT_CS (kSPI_Ssel0)
#define WIFISHIELD_SPI_CLK_CONNECT (kFRO12M_to_FLEXCOMM9)
#define WIFISHIELD_SPI_IP_RESET (kFC9_RST_SHIFT_RSTn)
#define WIFISHIELD_SPI_BAUDRATE (10000000)
#define WIFISHIELD_SPI_THRESHOLD (8)

/* EDMA settings */
#define WIFISHIELD_DMA (DMA0)
#define WIFISHIELD_DMA_RX_CHNL (22)
#define WIFISHIELD_DMA_TX_CHNL (23)

#endif

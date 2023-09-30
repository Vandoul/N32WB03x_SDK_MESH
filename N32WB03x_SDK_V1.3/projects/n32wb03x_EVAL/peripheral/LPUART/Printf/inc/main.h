/*****************************************************************************
 * Copyright (c) 2019, Nations Technologies Inc.
 *
 * All rights reserved.
 * ****************************************************************************
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * - Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the disclaimer below.
 *
 * Nations' name may not be used to endorse or promote products derived from
 * this software without specific prior written permission.
 *
 * DISCLAIMER: THIS SOFTWARE IS PROVIDED BY NATIONS "AS IS" AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * DISCLAIMED. IN NO EVENT SHALL NATIONS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
 * OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * ****************************************************************************/

/**
 * @file main.h
 * @author Nations Firmware Team
 * @version v1.0.0
 *
 * @copyright Copyright (c) 2019, Nations Technologies Inc. All rights reserved.
 */
#ifndef __MAIN_H__
#define __MAIN_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "n32wb03x.h"

#define _LPUART1_COM_    (0)

#if (_LPUART1_COM_ == 0)
#define LPUARTx             LPUART1
#define LPUARTx_CLK         RCC_LPUART1CLK
#define LPUARTx_GPIO        GPIOB
#define LPUARTx_GPIO_CLK    RCC_APB2_PERIPH_GPIOB
#define LPUARTx_RxPin       GPIO_PIN_2
#define LPUARTx_TxPin       GPIO_PIN_1
#define LPUARTx_Rx_GPIO_AF  GPIO_AF4_LPUART1
#define LPUARTx_Tx_GPIO_AF  GPIO_AF4_LPUART1
#else
#define LPUARTx             LPUART1
#define LPUARTx_CLK         RCC_LPUART1CLK
#define LPUARTx_GPIO        GPIOB
#define LPUARTx_GPIO_CLK    RCC_APB2_PERIPH_GPIOB
#define LPUARTx_RxPin       GPIO_PIN_11
#define LPUARTx_TxPin       GPIO_PIN_12
#define LPUARTx_Rx_GPIO_AF  GPIO_AF2_LPUART1
#define LPUARTx_Tx_GPIO_AF  GPIO_AF2_LPUART1
#endif



typedef enum
{
    FAILED = 0,
    PASSED = !FAILED
} TestStatus;

void RCC_Configuration(uint32_t LPUART_CLK_SRC);
void GPIO_Configuration(void);

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H__ */

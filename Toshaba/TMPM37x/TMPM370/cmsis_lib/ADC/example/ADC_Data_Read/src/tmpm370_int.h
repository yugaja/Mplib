/**
 *******************************************************************************
 * @file    tmpm370_int.h
 * @brief   All interrupt request functions prototypes of ADC
 *          for the TOSHIBA 'TMPM370' Device Series
 * @version V0.100
 * @date    2011/03/23
 * 
 * THE SOURCE CODE AND ITS RELATED DOCUMENTATION IS PROVIDED "AS IS". TOSHIBA
 * CORPORATION MAKES NO OTHER WARRANTY OF ANY KIND, WHETHER EXPRESS, IMPLIED OR,
 * STATUTORY AND DISCLAIMS ANY AND ALL IMPLIED WARRANTIES OF MERCHANTABILITY,
 * SATISFACTORY QUALITY, NON INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
 * 
 * THE SOURCE CODE AND DOCUMENTATION MAY INCLUDE ERRORS. TOSHIBA CORPORATION
 * RESERVES THE RIGHT TO INCORPORATE MODIFICATIONS TO THE SOURCE CODE IN LATER
 * REVISIONS OF IT, AND TO MAKE IMPROVEMENTS OR CHANGES IN THE DOCUMENTATION OR
 * THE PRODUCTS OR TECHNOLOGIES DESCRIBED THEREIN AT ANY TIME.
 * 
 * TOSHIBA CORPORATION SHALL NOT BE LIABLE FOR ANY DIRECT, INDIRECT OR
 * CONSEQUENTIAL DAMAGE OR LIABILITY ARISING FROM YOUR USE OF THE SOURCE CODE OR
 * ANY DOCUMENTATION, INCLUDING BUT NOT LIMITED TO, LOST REVENUES, DATA OR
 * PROFITS, DAMAGES OF ANY SPECIAL, INCIDENTAL OR CONSEQUENTIAL NATURE, PUNITIVE
 * DAMAGES, LOSS OF PROPERTY OR LOSS OF PROFITS ARISING OUT OF OR IN CONNECTION
 * WITH THIS AGREEMENT, OR BEING UNUSABLE, EVEN IF ADVISED OF THE POSSIBILITY OR
 * PROBABILITY OF SUCH DAMAGES AND WHETHER A CLAIM FOR SUCH DAMAGE IS BASED UPON
 * WARRANTY, CONTRACT, TORT, NEGLIGENCE OR OTHERWISE.
 * 
 * (C)Copyright TOSHIBA CORPORATION 2011 All rights reserved
 *******************************************************************************
 */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __TMPM370_INT_H
#define __TMPM370_INT_H

/* Includes ------------------------------------------------------------------*/
#include "tmpm370_adc.h"
#include "tmpm370_gpio.h"
#include "tmpm370_uart.h"
#include "tmpm370_int.h"
#include "adc.h"
#include "uart.h"
#include <stdio.h>

/* external variables --------------------------------------------------------*/
extern char gSIOTxBuffer[];
extern uint8_t gSIORdIndex;
extern uint8_t gSIOWrIndex;
extern uint8_t fSIO_INT;

/* Private function prototypes -----------------------------------------------*/
void INTTX0_IRQHandler(void);

#endif                          /* __TMPM370_INT_H */

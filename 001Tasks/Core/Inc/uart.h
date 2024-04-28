#ifndef __UART_H__
#define __UART_H__
#include <stdint.h>
#include "stm32f7xx.h"
#include "stm32f7xx_hal.h"
#include "stm32f769xx.h"

UART_HandleTypeDef USB_UART;

void uart1_txt_init(void);
void led_init(void);
#endif

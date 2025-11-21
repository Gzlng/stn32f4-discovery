#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

#include "stm32f4xx_hal.h"

void Error_Handler(void);
void SystemClock_Config(void);

// Убираем static из объявлений
void MX_GPIO_Init(void);
void MX_USART2_UART_Init(void);

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
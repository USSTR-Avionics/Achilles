#ifndef __DEBUG_PRINTER
#define __DEBUG_PRINTER

#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "stm32f1xx_hal.h"


void uart_init(UART_HandleTypeDef huart);

void uart_print(const char *format, va_list args);

void debug_print(const char *format, ...);



#endif

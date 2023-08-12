#include "debug_printer.h"

UART_HandleTypeDef debug_uart;

uart_init(UART_HandleTypeDef huart)
{
	debug_uart = huart;
}

void uart_print(const char *format, va_list args)
{
	char string[200];
	if(0 < vsprintf(string, format, args))
	{
	   HAL_UART_Transmit(&debug_uart, (uint8_t*)string, strlen(string), 100); // send message via UART
	}
}

void debug_print(const char *format, ...)
{
//	va_list args;
//	va_start(args, format);
//	uart_print(format, args);
//	va_end(args);

	HAL_UART_Transmit(&debug_uart, (uint8_t*)format, strlen(format), 100);
}


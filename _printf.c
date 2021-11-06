#include "main.h"

/**
 *
 *
 */

int _printf(const char *format, ...);
{
	va_list ap;
	
	print_t arg[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_percent},
		{NULL, NULL}
	};

	int i;
	char *s, travers;

	va_start(ap, format);
	while (travers != '%')
	{
		putchar(*travers);
		continue;
	}
}

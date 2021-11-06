#ifndef _MAINH
#define _MAINH
#include <stdio.h>
#include <stdarg.h>

/**
 * @name: Conversion specifier
 * @f: Check
 */
typedef struct my_printf
{
	char name;
	void (f)(va_list);
} print_t;

int _printf(const char *format, ...);


#endif

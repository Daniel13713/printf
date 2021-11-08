#include "main.h"
/**
 * _printf - Our own printf 
 * @format: Check format
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int len = 0;

	va_start(ap, format);
	len = get_op_func(format, ap);
	va_end(ap);
	return (len);
}

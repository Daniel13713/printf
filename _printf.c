#include "main.h"
/**
 * _printf - Our own printf 
 * @format: Check format
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int i, j, len = 0;
	int count = 0;

	print_t arg[] = {
		{"c", print_char},
		{"s", print_str},
		{"d", print_dec},
		{"i", print_int},
		{"b", print_b},
		{"o", print_oct},
		{"%", print_perc},
		{NULL, NULL}};

	va_start(ap, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			j = 0;
			while (arg[j].name)
			{
				if (format[i + 1] == *arg[j].name)
				{
					len += arg[j].f(ap);
					break;
				}
				j++;
			}
			if (!arg[j].name)
			{
				_putchar('%');
				i--;
				len++;
			}
			i++;
		}
		else if (format[i] != '%')
		{
			_putchar(format[i]);
			count++;
		}
	}
	va_end(ap);
	return (count + len);
}

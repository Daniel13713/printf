#include "main.h"
/**
 * _printf - Our own printf
 * @format: Check format
 * Return: len
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int i, j, len = 0;
	int count = 0;

	va_start(ap, format);
	if (format == NULL)
		exit(98);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; arg[j].name; j++)
			{
				if (format[i + 1] == *arg[j].name)
				{
					len += arg[j].f(ap);
					break;
				}
			}
			if (!arg[j].name)
			{
				_putchar(format[i]);
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

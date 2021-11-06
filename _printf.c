#include "main.h"
/**
 * _printf - Our own printf 
 * @format: Check format
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int len = 0;
	int k = 0;

	print_t arg[] = {
		{"c", print_char},
		{"s", print_str},
		{"d", print_decimal},
		{"i", print_int},
        {"%", print_percent},
		{NULL, NULL}
	};

	int i, j;
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
			i++;
		}
		else if (format[i] != '%')
		{
			_putchar(format[i]);
			k++;
		}
	}
    va_end(ap);
	return (k + len);
}

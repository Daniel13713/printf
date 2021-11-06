#include "main.h"
/**
 * _printf - Our own printf 
 * @format: Check format
 */
int _printf(const char *format, ...)
{
	va_list ap;

	print_t arg[] = {
		{"c", print_char},
		{"s", print_str},
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
       		 			arg[j].f(ap);
       	        	 		break;
           			}
            			j++;
			}
		}
		else if (format[i - 1] != '%')
		{
			_putchar(format[i]);
		}
	}
    	va_end(ap);
    	return (0);
}

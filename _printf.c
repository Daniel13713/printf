#include "main.h"
/**
 * _printf - Produces output according to a format
 * @format: Character string
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

	int i = 0, j;

	va_start(ap, format);

	while (format && format[i])
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
		i++;
	}
	va_end(ap);
	return (0);
}

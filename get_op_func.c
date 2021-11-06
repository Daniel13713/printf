#include "main.h"
/**
 * get_op_func - Assigner func
 * @ap: List the argments
 * @format: Character string
 */
char (*get_op_func(va_list ap, const char *format))
{	
	print_t arg[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_percent},
		{NULL, NULL}
	};

	int i, j;

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
            i++;
        }
    }
    va_end(ap);
    return (0);
}

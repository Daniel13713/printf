#include "main.h"
/**
 * _printf - Our own printf 
 * @format: Check format
 */
int _printf(const char *format, ...)
{
    int i;
    char *buf;
    va_list arg;

    va_start(arg, format);
    if (format == NULL)
    {
        exit(98);
    }

    buf = get_op_func(arg, format, buf);
    if ()
}
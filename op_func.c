#include "main.h"

/**
 * @print_char - print type char
 *
 * @c: pointer to argument
 * Return: Nothing
 */

void print_char(va_list ap)
{
	_putchar(va_arg(ap, int));
	/*_putchar('\n');*/
}

/**
 * @print_str - print type char *
 *
 * @c: pointer to argument
 * Return: Nothing
 */

void print_str(va_list ap)
{
	char *str = va_arg(ap, char *);
	if (str)
	{
		while (*str)
		{
			_putchar(*str);
			str++;
		}
		/*_putchar('\n');*/
	}
}

/**
 * @print_percent - print a porcent sing (%)
 *
 * @c: pointer to argument
 * Return: Nothing
 */

void print_percent(va_list ap)
{
	_putchar('%');
	/*_putchar('\n');*/
	va_arg(ap, int);
}

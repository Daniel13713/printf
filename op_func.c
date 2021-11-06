#include "main.h"

/**
 * @print_char - print type char
 *
 * @c: pointer to argument
 * Return: Nothing
 */

void print_char(va_list ap)
{
	putchar(va_arg(ap, int));
	putchar('\n');
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
			putchar(*str);
			str++;
		}
		putchar('\n');
	}
}

/**
 * @print_porcent - print a porcent sing (%)
 *
 * @c: pointer to argument
 * Return: Nothing
 */

void print_percent(va_list ap)
{
	putchar('%');
	putchar('\n');
	va_arg(ap, int);
}

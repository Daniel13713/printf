#include "main.h"
/**
 * @print_char - print type char
 * @c: pointer to argument
 * Return: Nothing
 */

void print_char(va_list c)
{
	_putchar(va_arg(c, int));
}

/**
 * @print_str - print type char *
 *
 * @s: pointer to argument
 * Return: Nothing
 */

void print_str(va_list s)
{
	char *str = va_arg(s, char *);
	if (str)
	{
		while (*str)
		{
			_putchar(*str);
			str++;
		}
	}
}

/**
 * @print_percent - print a porcent sing (%)
 *
 * @p: pointer to argument
 * Return: Nothing
 */

void print_percent(va_list p)
{
	_putchar('%');
	va_arg(p, int);
}

/**
 * @print_char - print type char
 * @i: pointer to argument
 * Return: Nothing
 */

void print_int(va_list i)
{
	_putchar(va_arg(i, int));
}

/**
 * @print_char - print type char
 * @d: pointer to argument
 * Return: Nothing
 */

void print_decimal(va_list d)
{
	int i = (va_arg(d, int));
	printf("identificar = %d", i);
	if (i < 0)
	{
		i = -i;
		_putchar('-');
	}
	_putchar(i + 1);
}
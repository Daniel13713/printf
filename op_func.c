#include "main.h"
/**
 * @print_char - print type char
 * @c: pointer to argument
 * Return: Nothing
 */
int print_char(va_list c)
{
	_putchar(va_arg(c, int));
	return (1);
}

/**
 * @print_str - print type char *
 *
 * @s: pointer to argument
 * Return: Nothing
 */
int print_str(va_list s)
{
	char *str = va_arg(s, char *);
	int i = 0;

	if (str)
	{
		while (*str)
		{
			_putchar(*str);
			str++;
			i++;
		}
	}
	return (i);
}

/**
 * @print_percent - print a porcent sing (%)
 *
 * @p: pointer to argument
 * Return: Nothing
 */
int print_percent(va_list __attribute__ ((unused)) p)
{
	_putchar('%');
	return (1);
}

/**
 * @print_char - print type char
 * @i: pointer to argument
 * Return: Nothing
 */
int print_int(va_list i)
{
	int j = (va_arg(i, int));
	print_number(j);
	return (count_digit(j));
}

/**
 * @print_char - print type char
 * @d: pointer to argument
 * Return: Nothing
 */
int print_decimal(va_list d)
{
	int i = va_arg(d, int);
	print_number(i);
	return (count_digit(i));
}

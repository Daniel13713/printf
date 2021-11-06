#include "main.h"
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

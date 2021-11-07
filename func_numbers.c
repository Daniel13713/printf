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


/**
 * @print_char - print type char
 * @d: pointer to argument
 * Return: Nothing
 */

int decabin (unsigned int n, int count, int b) 
{
    if (n)
    {
	    decabin(n / 2, count + 1, b + 1);
	    _putchar(n % 2 + '0');
    }
    /*printf("\nc = %d\n", count);*/
    return (b);
}

int print_b(va_list d)
{
	unsigned int decimal = 0;
	int len = 0;

	decimal = va_arg(d, unsigned int);
	len = decabin(decimal, len, 0);
	return (len + 1);
}

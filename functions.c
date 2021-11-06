#include "main.h"
/**
 * _strlen - The length of a string
 * @s: Check the string
 *
 * Return: Always 0
 */
int _len(char *s)
{
	int leng = 0;

	while (s[leng] != '\0')
		leng++;
	return (leng);
}

/**
 * prime_number - Prints a prime number
 * @n: check n
 * @i: Check a number aux
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
void print_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}
	else
	{
		n1 = n;
	}
	if (n1 / 10)
	{
		print_number(n1 / 10);
	}
	_putchar((n1 % 10) + '0');
}

/**
 * count_digit - Function count digits
 * @i: Check i
 * @return i
 */
int count_digit(int i)
{
    unsigned int j = 0;
    unsigned int k;

    if (i < 0)
	{
        k = i * -1;
		j++;
	}
	else
        k = i;
    while (k != 0)
    {
        k /= 10;
        j++;
    }
    return (j);
}

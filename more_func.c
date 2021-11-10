#include "main.h"

/**
 * print_rev_str - Print reversed string
 * @r: Pointer to argument
 * Return: Nothing
 */
int print_rev_str(va_list r)
{
	int i, count;
	int len = 0;
	char *s = va_arg(r, char *);

	count = 0;
	if (s == NULL)
	{
		s = "(null)";
	}
	len = _len(s);
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
		count++;
	}
	return (count);
}

/**
 * print_rot13 - Print conversion specifier
 * @R: Pointer to argument
 * Return: Nothing
 */
int print_rot13(va_list R)
{
	char *str1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *str2 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;
	int count = 0;

	char *s = va_arg(R, char *);

	for (i = 0; s[i]; i++)
	{
		for (j = 0; str1[j]; j++)
		{
			if (s[i] == str1[j])
			{
				_putchar(str2[j]);
				count++;
				break;
			}
		}
		if (!str1[j])
		{
			_putchar(s[i]);
			count++;
		}
	}
	return (count);
}

/**
 * print_number_flag - Prints a prime number
 * @n: check n
 * @flag: indicator of flag (ex. "%d" -> 0, "%u"->1 )
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
void print_number_flag(int n, int flag)
{
	unsigned int n1;

	if (n < 0 && flag == 0)
	{
		_putchar('-');
		n1 = -n;
	}
	else if (n < 0 && flag == 1)
	{
		n1 = UINT_MAX + n + 1;
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
 * count_digit_base_flag - Function count digits
 * @i: Check i
 * @base: Check base
 * @flag: indicator of flag (ex. "%d" -> 0, "%u"->1 )
 * Return: i
 */
int count_digit_base_flag(int i, int base, int flag)
{
	unsigned int j = 0;
	unsigned int k;

	if (i == 0)
	{
		return (1);
	}
	if (i < 0 && flag == 0)
	{
		k = i * -1;
		j++;
	}
	else if (i < 0 && flag == 1)
	{
		k = UINT_MAX + i + 1;
	}
	else
		k = i;
	while (k != 0)
	{
		k /= base;
		j++;
	}
	return (j);
}

/**
 * print_unsing - print type int
 * @i: pointer to argument
 * Return: Nothing
 */
int print_unsing(va_list i)
{
	unsigned int j = (va_arg(i, unsigned int));

	print_number_flag(j, 1);
	return (count_digit_base_flag(j, 10, 1));
}

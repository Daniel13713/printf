#include "main.h"

/**
 * print_rev_str - Print reversed string
 * @r: Pointer to argument
 * Return: Nothing
 */
int print_rev_str(va_list r)
{
	int i, j, k, count;
	char c[1024];
	char *p = c;
	char *aux;
	char *s = va_arg(r, char *);

	count = 0;
	if (s == NULL)
	{
		s = "(null)";
	}
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	for (j = i - 1; j >= 0; --j)
	{
		p[i - j - 1] = *(s + j);
	}
	for (k = 0; k <= i - 1; k++)
	{
		aux[k] = p[k];
	}
	count = print_chars(aux);
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

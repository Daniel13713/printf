#include "main.h"

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

#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;
	unsigned int ui = 68;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	_printf("Decimal is = [%d] || Binary is = [%b]\n", 98, 98);
	/*printf("Decimal is = [%d] || Binary is = [%b]\n", 15, 15);*/
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);

	len = printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
	len2 = _printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);

	len = _printf("%%");
	len2 = printf("%%");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);

	len = _printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
	len2 = printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');	
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	/*

	len = _printf("css%ccs%scscscs\n", 'T', "Test");
	len2 = printf("css%ccs%scscscs\n", 'T', "Test");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);

	len = _printf(NULL);
	printf("\n");
	len2 = printf(NULL);
	printf("\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);

	len = _printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
	len2 = printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);


	len = _printf("%d\n", (int)0);
	len2 = printf("%d\n", (int)0);
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);

	len = _printf("%b\n", (unsigned int)0);
	len2 = _printf("%b\n", 2);
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);*/

	/*	
	printf("-%-hola-%-mundo-%%-soy-%-daniel\n");
	printf("-%-hola-%-mundo-%%-soy-%-daniel\n");*/


	return (0);
}

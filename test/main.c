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
    int len3;
    /*int len4;*/

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
    _printf("Percent:[%%]\n");
    printf("Percent:[%%]\n");
    len = printf("%s\n", "prueba");
    len2 = printf("%s\n", "prueba");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    /*_printf("\nDecimal -> Binary\n");
    len4 = _printf("%b\n", 98); 
    _printf("len:[%d]\n", len4);*/

    printf("-----------------\n");
    len3 = _printf("h%c-%s-%s-%d-%%hola\n", 'a', "hola", "holas", -123456);
    printf("Prueba: [%d, %i]\n", len3, len3);
    _printf("Prueba: [%d, %i]\n", len3, len3);
   


    return (0);
}

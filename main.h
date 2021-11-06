#ifndef _MAINH
#define _MAINH
#include <stdio.h>
#include <stdarg.h>

/**
 * @name: Conversion specifier
 * @f: Check
 */
typedef struct my_printf
{
	char *name;
	int (*f)(va_list);
} print_t;

int _putchar(char c);
int _len(char *s);
int count_digit(int i);
void print_number(int n);
int _printf(const char *format, ...);

int print_char(va_list c);
int print_str(va_list s);
int print_percent(va_list p);
int print_decimal(va_list d);
int print_int(va_list i);
#endif

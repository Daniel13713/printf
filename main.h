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
	void (*f)(va_list);
} print_t;

int _putchar(char c);
int _len(char *s);
void print_number(int n);
int _printf(const char *format, ...);

int print_char(va_list ap);
void print_str(va_list ap);
void print_percent(va_list ap);
void print_decimal(va_list ap);
void print_int(va_list ap);
#endif

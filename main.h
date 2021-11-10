#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * struct my_printf - Our printf
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
int count_digit_base(int i, int base);
void print_number(int n);
char *decabin(int n, char *pr, int i, int base);
int _printf(const char *format, ...);
void rev_string(char *s);
int print_char(va_list c);
int print_str(va_list s);
int print_dec(va_list d);
int print_int(va_list i);
int print_b(va_list d);
int print_chars(char *str);
int print_perc(va_list p);
int print_oct(va_list d);
int print_rot13(va_list R);
static const print_t arg[] = {
	{"c", print_char},
	{"s", print_str},
	{"d", print_dec},
	{"i", print_int},
	{"b", print_b},
	{"o", print_oct},
	{"R", print_rot13},
	{"%", print_perc},
	{NULL, NULL}};

#endif

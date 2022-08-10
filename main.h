#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

/**
 * struct printer - structure for printing to stdout
 * @specifier: specifier
 * @run: initiate
 */

typedef struct printer
{
	char *specifier;
	int (*run)(va_list);
} printer;

printer _get_print_func(const char *specifier);
int _putchar(char c);
int _printf(const char *format, ...);
int print_dec(va_list);
int print_int(va_list);
int print_char(va_list);
int print_string(va_list);
int _strlen(const char *s);
int print_binary(va_list);
int print_pointer(va_list);

#endif /* MAIN_H */

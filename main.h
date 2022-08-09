#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>

/**
 * struct printer - structure for printing to stdout
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
int printf_char(va_list val);

#endif /* MAIN_H */

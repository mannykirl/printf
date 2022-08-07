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

int _putchar(char c);
int _printf(const char *format, ...);

#endif /* MAIN_H */

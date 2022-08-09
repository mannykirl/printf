#include "main.h"

/**
 * printf_char - prints a character
 * @val => arguments.
 * Return: 1.
 */
int print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}

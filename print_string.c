#include "main.h"

/**
 * print_string - print a string.
 * @args: Arguments.
 * Return: number of characters printed
 */
int print_string(va_list args)
{
	int counter;
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";
	for (counter = 0; str[counter]; counter++)
	{
		_putchar(str[counter]);
	}
	return (counter);
}

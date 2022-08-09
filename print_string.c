#include "main.h"

/**
 * print_string - print a string.
 * @str: The string.
 * Return: number of characters printed
 */

int _puts(char *str)
{
	int i = 0;
	
	while(str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}

int print_string(va_list args)
{
		return (_puts(va_arg(args, char*)));
}

#include "main.h"

/**
 * print_rev_str - prints a string in reverse
 * @args: arguments list
 *
 * Return: number of chars printed
 */
int print_rev_str(va_list args)
{
	char *str;
	int i, count = 0;

	str = va_arg(args, char *);
	if (str == NULL)
		str = ")llun(";
	for (i = 0; str[i]; i++)
		;
	for (i -= 1; i >= 0; i--)
	{
		_putchar(str[i]);
		count++;
	}
	return (count);
}

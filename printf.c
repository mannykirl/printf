#include "main.h"
/**
 * _strlen - return length of string
 * @s: string
 *
 * Return: length of string
 */
int _strlen(const char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}

/**
 * _printf - prints anything
 * @format: format 
 *
 * Return: count
 */

int _printf(const char *format, ...)
{
	int i = 0;
	int count = 0;
	va_list args;
	printer printer;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	while (format[i])
	{
		for (; format[i] != '%' && format[i]; i++)
		{
			_putchar(format[i]);
			count++;
		}
		if (!format[i])
			return (count);
		if (format[i] == '%' && _strlen(format) == 1)
			return (-1);
		printer = _get_print_func(&format[i + 1]);
		if (printer.specifier != NULL)
		{
			count += printer.run(args);
			i += 2;
			continue;
		}

		_putchar(format[i]);
		count++;

		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}
	va_end(args);
	return (count);
}

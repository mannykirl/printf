#include "main.h"

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

	va_start(args, format);
	while (format[i]);
	{
		for (; format[i] != '%' && format[i]; i++)
		{
			_putchar(format[i]);
			count++;
		}

		if (!format[i])
			break;

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

#include "main.h"

/**
 * print_string - print a string.
 * @val: argument.
 * Return: the length of the string.
 */

int _strlen(char *s)
{
	int len = 0;
	
	while(*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}

int print_string(va_list val)
{
	char *s;
	int i, len;

	s = va_arg(val, char *);
	if (s == NULL)
	{
		s = "(null)";
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
	else
	{
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
}

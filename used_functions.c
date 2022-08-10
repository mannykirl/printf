#include "main.h"

/**
 * _get_print_func - gets specifiers
 * @specifier: the specifier
 *
 * Return: printer found
 */
printer _get_print_func(const char *specifier)
{
	int i;
	static printer printers[] = {
		{"X", print_hex_upper},
		{"x", print_hex_low},
		{"o", print_octal},
		{"u", print_udec},
		{"b", print_binary},
		{"s", print_string},
		{"i", print_int},
		{"c", print_char},
		{"d", print_dec},
		{NULL, NULL}
	};

	for (i = 0; printers[i].specifier != NULL; i++)
	{
		if (*specifier == *(printers[i].specifier))
			break;
	}
	return (printers[i]);
}

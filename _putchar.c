#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the char c to stdout
 * @c: The character to print
 *
 * Return: return 1 on success and -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

#include "main.h"

/**
 * print_binary - takes an unsigned int and print it
 * in binary notations.
 * @args: argument list.
 *
 * Return: num of char printed.
 */
int print_binary(va_list args)
{
	unsigned int i, j, k, sum;
	unsigned int a[32];
	int count;

	i = va_arg(args, unsigned int);
	j = 2147483648;
	a[0] = i / j;
	for (k = 1; k < 32; k++)
	{
		j /= 2;
		a[k] = (i / j) % 2;
	}
	for (k = 0, sum = 0, count = 0; k < 32; k++)
	{
		sum += a[k];
		if (sum || k == 31)
		{
			_putchar('0' + a[k]);
			count++;
		}
	}
	return (count);
}

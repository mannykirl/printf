#include "main.h"

int print_int(va_list args)
{
	int i, j, k, sum, count;
	int a[10];

	k = va_arg(args, int);
	count = 0;
	j = 1000000000;
	a[0] = k / j;
	for (i = 1; i < 10; i++)
	{
		j /= 10;
		a[i] = (k / j) % 10;
	}
	if (k < 0)
	{
		_putchar('-');
		count++;
		for (i = 0; i < 10; i++)
			a[i] *= -1;
	}
	for (i = 0, sum = 0; i < 10; i++)
	{
		sum += a[i];
		if (sum != 0 || i == 9)
		{
			_putchar('0' + a[i]);
			count++;
		}
	}
	return (count);
}

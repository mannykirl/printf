#include <limits.h>
#include <stdio.h>
#include "main.h"

int main(void)
{

	int len;
	int len2;
	unsigned int ui;

	ui = (unsigned int)INT_MAX + 1024;
	_printf("unsigned:[%u]\n", ui);
	printf("unsigned:[%u]\n", ui);
	printf("unsigned octal:[%o]\n", ui);
	_printf("unsigned octal:[%o]\n", ui);
	len = _printf("percent:[%%]\n");
	len2 = printf("percent:[%%]\n");
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string");
	printf("string:[%s]\n", "I am a string");
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	return (0);
}

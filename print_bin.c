#include "main.h"

/**
 * print_binary - print a number in binary form
 * @arg: argument
 * Return: counter
 *
 *
*/

int print_binary(va_list arg)
{

	unsigned int n = va_arg(arg, unsigned int);
	int cc = 0, i, rest;
	char binery[64];

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	while (n)
	{
		rest = n % 2;
		n = n / 2;
		binery[cc] = rest;
		cc++;
	}

	i = cc - 1;
	while (i >= 0)
	{
		_putchar(binery[i] + '0');
		i--;
	}

	return (cc);
}

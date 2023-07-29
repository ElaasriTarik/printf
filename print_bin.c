#include "main.h"

/**
 * print_binary - print a number in binary form
 * @arg: argument
 * Return: counter
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

/**
 * print_octal - prints a number in octal base
 *
 * @arg: argument
 *
 * Return: number of symbols
 */

int print_octal(va_list arg)
{
	unsigned int n = va_arg(arg, unsigned int);
	unsigned int length = 0, num_digits = 0, temp, div, digit, i;
	if (n == 0)
	{
		_putchar('0');
		length++;
	}
	else
	{
		temp = n;
		while (temp != 0)
		{
			temp /= 8;
			num_digits++;
		}
		div = 1;
		for (i = 1; i < num_digits; i++)
		{
			div *= 8;
		}
		while (div != 0)
		{
			digit = n / div;
			_putchar(digit + '0');
			n %= div;
			div /= 8;
			length++;
		}
	}
	return (length);
}

/**
 * print_hex - prints a number in hex base
 * @arg: argument
 * Return: number of symbols
 */

int print_hex(va_list arg)
{
	unsigned int n = va_arg(arg, unsigned int);
	int i = 0, j = 0, num = 0;
	char tran[] = "0123456789abcdef";
	char hex[16];
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	while (n)
	{
		num = n % 16;
		n = n / 16;
		j = 0;
		while (tran[j] != '\0')
		{
			if (j == num)
			{
				hex[i] = tran[j];
			}
			j++;
		}
		i++;
	}
	j = i - 1;
	while (j >= 0)
	{
		_putchar(hex[j]);
		j--;
	}
	return (i);
}

#include "main.h"

/**
 * print_hex_upper - prints a number in hex base
 *
 * @arg: argument
 *
 * Return: number of symbols
 */

int print_hex_upper(va_list arg)
{
	unsigned int n = va_arg(arg, unsigned int);
	int i = 0, j = 0, number = 0;
    char tran[] = "0123456789ABCDEF";
	char hex[16];
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	while (n)
	{
		number = n % 16;
		n = n / 16;
		j = 0;
		while (tran[j] != '\0')
		{
			if (j == number)
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

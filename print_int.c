#include "main.h"

/**
 * print_integer - print an integer
 * @arg: argument
 * Return: counter
 */

int print_integer(va_list arg)
{
	int n = va_arg(arg, int);
	int len = 0, num_digits = 0, divisor, digit, i;

	if (n == INT_MIN)
		return (print_min_int());
		
	if (n < 0)
	{
		_putchar('-');
		n = -n;
		len++;
	}

	if (n == 0)
	{
		_putchar('0');
		len++;
	}
	else
	{
		num_digits = count_digits(n);
		divisor = 1;
		for (i = 1; i < num_digits; i++)
			divisor *= 10;

		while (divisor != 0)
		{
			digit = n / divisor;
			_putchar(digit + '0');
			n %= divisor;
			divisor /= 10;
			len++;
		}
	}
	return (len);
}

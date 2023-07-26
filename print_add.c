#include "main.h"

/**
 * print_add - printf add in hex
 * @arg: Argument
 *
 * Return: counter
 */

int print_add(va_list arg)
{
	int x = 0;
	void *p = va_arg(arg, void*);
	x += print_address(p);
	return (x);
}

/**
 * search - printf special char in hex
 * @n: Input
 *
 * Return: counter
 */

int search(char n)
{
	if (n < ' ' || n >= '~')
	{
		return (-1);
	}
	else
		return (0);
}

#include "main.h"

/**
 * print_chare - prints a character
 *
 * @arg: Argument
 *
 * Return: counter
 */

int print_chare(va_list arg)
{
	char c;
	c = va_arg(arg, int);
	_putchar(c);
	return (1);
}

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
	x += print_add(p);
	return (x);
}

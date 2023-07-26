#include "main.h"
/**
 * print_string - print a string
 *
 * @arg: Argument
 *
 * Return: counter
 */

int print_string(va_list arg)
{
	char *str;
	char *n_err = "(null)";
	int x = 0;

	str = va_arg(arg, char *);
	if (str != NULL)
	{
		while (str[x])
		{
			_putchar(str[x]);
			x++;
        }
	}
	else
	{
		while (*n_err)
		{
			_putchar(*n_err);
			n_err++;
			x++;
		}

	}
	return (x);
}

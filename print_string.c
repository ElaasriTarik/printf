#include "main.h"


/**
 * print_str - printf special char in hex
 * @arg: Argument
 * Return: counter
 */

int print_str(va_list arg)
{
	char *str = va_arg(arg, char *);
	int  i = 0;
	int count = 0;

	while (str[i] != '\0')
	{
		if (search(str[i]) != -1)
		{
			_putchar(str[i]);
			count++;
		}
		else
		{
			_putchar('\\');
			_putchar('x');
			count += 2;
			if (str[i] < 16)
			{
				_putchar('0');
				count += _printf("%X", str[i]);
				count++;
			}
			else
			{
				count += _printf("%X", str[i]);
			}
		}
		i++;
	}
	return (count);
}

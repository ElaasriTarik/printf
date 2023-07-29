#include "main.h"

/**
 * switche - find the character
 * @list: argument
 * @format: character for switch
 * Return: counter
 */

int switche(va_list list, char format)
{
int cc = 0, i = 0;
string fun[] = {
		{'c', print_chare},
        {'i', print_integer},
        {'d', print_integer},
		{'s', print_string},
        {'X', print_hex_upper},
		{'S', print_str},
        {'p', print_add},
        {'\0', NULL}
};

	i = 0;
	while ((format != fun[i].str) && (fun[i].str != '\0'))
	{
		i++;
	}
	if (fun[i].str != '\0')
		cc += fun[i].print(list);

	else if (format == '%')
	{
		_putchar('%');
		cc++;
	}

	else
	{
		_putchar('%');
		_putchar(format);
		cc += 2;
	}
return (cc);
}

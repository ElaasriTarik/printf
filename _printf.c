#include "main.h"

/**
 * _printf - Prints string according to format
 * @format: format
 * Return: Number characters printed
 */

int _printf(const char *format, ...)
{
int count = 0;
va_list list;
va_start(list, format);
if (format == NULL || (format[0] == '%' && format[1] == NULL))
	{
		return (-1);
	}
	if (format[0] == '%' && format[1] == ' ' && !format[2])
	{
		return (-1);
	}
	while (format && *format)
	{
		if (*format == '%')
		{
			format++;
			count += switche(list, *format);
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}
	va_end(list);
	return (count);
}

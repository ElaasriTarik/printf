#include "main.h"

/**
 * _printf -> Prints a formatted string
 *
 * @format: Input String Format
 *
 * Return: Number chars Printed
 */
int _printf(const char *format, ...)
{
int cc = 0;
va_list list;
va_start(list, format);
if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	while (format && *format)
	{
		if (*format == '%')
		{
			format++;
			cc += switche(list, *format);
		}
		else
		{
			_putchar(*format);
			cc;
		}
		format++;
	}
	va_end(list);
	return cc;
}

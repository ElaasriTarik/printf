#include "main.h"

/**
 * _printf - Prints to the stdout according to given format
 * @format: Input String Format
 * Return: Number chararters Printed
 */

int _printf(const char *format, ...)
{
	int cc = 0;
	va_list list;

	va_start(list, format);
	if ((format == NULL) || (format[0] == '%' && format[1] == NULL))
		return (-1);

	if (format[0] == '%' && format[1] == ' ' && format[2] == NULL)
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
			cc++;
		}
		format++;
	}
	va_end(list);
	return (cc);
}

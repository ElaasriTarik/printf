#include "main.h"
/**
 * print_str - printf special char in hex
 * @arg: Argument
 * Return: counter
 */

int print_str(va_list arg)
{
char *string = va_arg(arg, char *);
int  i = 0;
int count = 0;

while (string[i] != '\0')
{
if (search(string[i]) != -1)
{
_putchar(string[i]);
count++;
}
else
{
_putchar('\\');
_putchar('x');
count += 2;
if (string[i] < 16)
{
_putchar('0');
count += _printf("%X", string[i]);
count++;
}
else
count += _printf("%X", string[i]);
}
i++;
}
return (count);
}

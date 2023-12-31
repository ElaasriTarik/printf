#include "main.h"

/**
* print_min_int - prints the minimum int
* Return: the length of int
*/
int print_min_int(void)
{
char *min_int = "2147483648";
int length = 0;
_putchar('-');
length++;
while (*min_int != '\0')
{
_putchar(*min_int);
length++;
min_int++;
}
return (length);
}

/**
 * print_integer - print int
 * @arg: args
 * Return: counter
 */

int print_integer(va_list arg)
{
int n = va_arg(arg, int);
int len = 0, digits = 0, divisor, digit, i;

if (n == INT_MIN)
return (print_min_int());
		
if (n < 0)
{
_putchar('-');
n = -n;
len++;
}

if (n == 0)
{
_putchar('0');
len++;
}
else
{
digits = count_digits(n);
divisor = 1;
for (i = 1; i < digits; i++)
divisor *= 10;

while (divisor != 0)
{
digit = n / divisor;
_putchar(digit + '0');
n %= divisor;
divisor /= 10;
len++;
}
}
return (len);
}

/**
* count_digits - counts the number of digits
* @n: number
* Return: the number of digits
*/

int count_digits(int n)
{
int digits = 0;
while (n != 0)
{
n /= 10;
digits++;
}
return (digits);
}

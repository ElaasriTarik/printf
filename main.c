#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program.
 *
 * Description: This is the main function, which serves as the entry point
 *              of the program. It demonstrates the usage of the _printf
 *              function to print memory addresses.
 *
 * Return: Always 0.
 */
int main(void)
{
void *loc;
int m = 0;

loc = NULL;
m = _printf("Address:[%p]\n", loc);
printf("Address:[%p]\n", loc);
printf("Address:[%p]\n", loc);

printf("%d\n", m);

return (0);
}

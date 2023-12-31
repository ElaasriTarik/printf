#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

typedef struct forma_cara
{
char str;
int (*print)(va_list arg);
} string;
int _putchar(char c);
int print_chare(va_list arg);
int print_string(va_list arg);
int _printf(const char *format, ...);
int print_integer(va_list arg);
int switche(va_list list, char format);
int print_min_int(void);
int count_digits(int n);
int print_hex_upper(va_list arg);
int print_str(va_list arg);
int print_add(va_list arg);
int search(char n);

#endif

#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>
#include <string.h>

/**
 * struct format - entry point
 *
 * Description: format to print
 *
 * @f: integer printer
 * @formatter: printing of char
 */

typedef struct formatter
{
	char formatter;
	int (*f)(va_list);
} formatter_t;

/**
 * my prototypes
 */

int _putchar(char c);
int _printf(const char *format, ...);
int all_function(char s, va_list args);

/**
 * all converter specifier
 */

int print_mod(va_list args);
int print_char(va_list args);
int print_string(va_list args);

#endif

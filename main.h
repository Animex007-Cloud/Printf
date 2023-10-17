#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>
#include <string.h>

/**
 * struct formatter - entry point
 *
 * Description: format to print
 * @c: pointer
 * @f: pointer to int
 */

typedef struct formatter
{
	char *c;
	int (*f)(va_list);
} formatter_t;

int _putchar(char c);
int _printf(const char *format, ...);
int print_s(va_list s);
int print_c(va_list c);
int print_d(va_list d);
int print_i(va_list i);

/**
 * struct function - entry point
 * @fomt: char holding pointer to format specifier
 *
 * @ptr: the int pointer to function to convert format specifier
 *
 */

typedef struct function
{
	char *fomt;
	int (*ptr)();
} function_t;
int print_char(va_list numz);
int print_string(va_list numz);
int _printf(const char *format, ...);
int _putchar(char c);
int (*all_function(char s))(va_list numz);
int print_deci(va_list numz);
int print_inte(va_list ar_numzlist);

#endif

#include "main.h"

/**
 * print_s - entry point
 * Description: function that prints a string
 *
 * @s: string holder
 * Return: the num of printed char
 */

int print_s(va_list s)
{
	int sum;
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(null)";
	for (sum = 0; str[sum]; sum++)
	{
		_putchar(str[sum]);
	}
	return (sum);
}

/**
 * print_c - entry point
 * Description: function that prints a character
 *
 * @c: print a character
 * Return: 1 on success
 */

int print_c(va_list c)
{
	char z = (char)va_arg(c, int);

	_putchar(z);
	return (1);
}

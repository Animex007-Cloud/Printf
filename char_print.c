#include "main.h"

/**
 * print_string - entry point
 * Description: function that prints string
 *
 * @numz: argument input
 * Return: count
 */

int print_string(va_list numz)
{
	int z, sum = 0;
	char *str;

	str = va_arg(numz, char *);
	if (str == NULL)
		str = "(null)";

	for (z = 0; str[z]; z++)
		sum += _putchar(str[z]);

	return (sum);
}

/**
 * print_char - entry point
 *
 * @numz: gives list of char
 * Description: function that prints a character
 * Return: q
 */

int print_char(va_list numz)
{
	char q = va_arg(numz, int);

	return (_putchar(q));
}

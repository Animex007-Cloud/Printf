#include "main.h"

/**
 * print_mod - entry point
 * Description: function that prints percent
 * @args: args to function
 * Return: mod
 */

int print_mod(va_list args)
{
	(void)args;

	_putchar('%');
	return (1);
}

/**
 * print_string - entry point
 * Description: function that prints a string
 *
 * @args: argument input
 * Return: count
 */

int print_string(va_list args)
{
	int z = 0;
	int pick_func = 0;
	char *str = va_arg(args, char *);

	if (!str)
		str = "(NULL)";

	if (str[z] == '\0')
		return (-1);

	for (z = 0; str[z] != '\0'; z++)
		pick_func += _putchar(str[z]);

	return (pick_func);
}

/**
 * print_char - entry point
 * Description: function that prints a character
 *
 * @args: arg print
 *
 * Return: character
 */

int print_char(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);
	return (1);
}

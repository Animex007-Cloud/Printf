#include "main.h"

/**
 * print_deci - entry point
 * Description: function that prints decimal
 *
 * @numz: takes and store the number of argument
 * Return: printed number
 */

int print_deci(va_list numz)
{
	int value;
	unsigned int b1, b2, sum, sum2;

	sum = 0;

	value = va_arg(numz, int);

	if (value < 0)
	{
		b1 = (value * -1);
		sum += _putchar(45);
	}
	else
		b1 = value;

	b2 = b1;
	sum2 = 1;
	while (b2 > 9)
	{
		b2 = b2 / 10;
		sum2 = sum2 * 10;
	}
	while (sum2 >= 1)
	{
		sum = sum + _putchar(((b1 / sum2) % 10) + '0');
		sum2 = sum2 / 10;
	}
	return (sum);
}

/**
 * print_inte - entry point
 *
 * Description: A function that prints an integer
 * @numz: holds the list of int
 * Return: printed number
 */

int print_inte(va_list numz)
{
	return (print_deci(numz));
}

#include "main.h"

/**
 * _printf - entry point
 *
 * Description: A function that prints according to specification
 *
 * @format: format according specifier
 * Return: format
 */

int _printf(const char *format, ...)
{
	int z = 0, to_count = 0, pick_func;
	va_list args;

	va_start(args, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	while (format[z])
	{
		pick_func = 0;
		if (format[z] == '%')
		{
			if (!format[z + 1] || (format[z + 1] == ' ' && !format[z + 2]))
			{
				to_count = -1;
				break;
			}
			pick_func += all_function(format[z + 1], args);
			if (pick_func == 0)
				to_count += _putchar(format[z + 1]);
			if (pick_func == -1)
				to_count = -1;
			z++;
		}
		else
		{
			(to_count == -1) ? (_putchar(format[z])) :
				(to_count += _putchar(format[z]));
		}
		z++;
		if (to_count != -1)
			to_count += pick_func;
	}
	va_end(args);
	return (to_count);
}

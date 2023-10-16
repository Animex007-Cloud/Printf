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
	int n = -1;

	if (format)
	{
		int b;
		va_list numz;
		int (*pick)(va_list);

		va_start(numz, format);
		if (format[0] == '%' && format[1] == '\0')
			return (-1);

		n = 0;

		for (b = 0; format[b] != '\0'; b++)
		{
			if (format[b] == '%')
			{
				if (format[b + 1] == '%')
				{
					n += _putchar(format[b]);
					b++;
				}
				else if (format[b + 1] != '\0')
				{
					pick = all_function(format[b + 1]);
					if (pick)
						n = n + pick(numz);
					else
						n += _putchar(format[b]) + _putchar(format[b + 1]);
					b++;
				}
			}
			else
				n = n + _putchar(format[b]);
		}
	}
	return (n);
}

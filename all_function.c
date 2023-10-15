#include "main.h"

/**
 * all_function - entry point
 *
 * @convert_spe: convert specifier by selection
 * @args: all arguments
 *
 * Return: all character count by entry
 */

int all_function(char convert_spe, va_list args)
{
	int z = 0;
	int pick_func = 0;

	formatter_t form[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_mod},
		{0, NULL}
	};

	while (form[z].formatter)
	{
		if (convert_spe == form[z].formatter)
			pick_func += form[z].f(args);
		z++;
	}
	if (pick_func == 0)
	{
		pick_func += _putchar('%');
		pick_func += _putchar(convert_spe);
	}
	return (pick_func);
}

#include "main.h"

/**
 * all_function - entry point
 *
 * Description: convert specifier by selection
 * @s: int check
 *
 * Return: all character count by entry
 */

int (*all_function(char s))(va_list)
{
	function_t fun[] = {
		{"c", print_char},
		{"s", print_string},
		{"i", print_inte},
		{"d", print_deci},
		{NULL, NULL}
	};

	int z;

	for (z = 0; fun[z].fomt != NULL; z++)
	{
		if (*fun[z].fomt == s)
			return (fun[z].ptr);
	}
	return (NULL);
}

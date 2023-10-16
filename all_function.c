#include "main.h"

/**
 * all_function - entry point
 *
 * @convert_spe: convert specifier by selection
 * @z: int check
 *
 * Return: all character count by entry
 */

int (*all_function(char s))(va_list)
{
	function_t fun[] = {
		{"c", print_char},
		{"s", print_string},
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

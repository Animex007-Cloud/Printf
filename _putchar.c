#include <unistd.h>

/**
 * _putchar - entry point
 * Description: write the character c to stdout
 * @c: char print
 *
 * Return: 1 0n success and -1 on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

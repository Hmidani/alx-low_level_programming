#include "main.h"

/**
 * _puts - a function that prints a string, to stdout.
 * @str: the string.
 *
 * Return: 0 always
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

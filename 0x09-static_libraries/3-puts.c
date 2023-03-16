#include "main.h"

/**
 * _puts - a function that prints a string, to stdout.
 * @str: the string.
 *
 * Return: 0 always
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}

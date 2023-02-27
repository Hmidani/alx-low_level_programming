#include "main.h"

/**
 * print_rev - a function that prints a triangle.
 * @s: the String.
 *
 * Return: 0 always
 */

void print_rev(char *s)
{
	int length, i;

	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

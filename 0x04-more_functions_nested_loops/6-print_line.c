#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal.
 * @n: the number of times.
 *
 * Return: 0 always
 */

void print_line(int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * @n: the number of times.
 *
 * Return: 0 always
 */

void print_diagonal(int n)
{
	int j, i;

	for (j = 0; j < n; j++)
	{
		for (i = 0; i < j; i++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}

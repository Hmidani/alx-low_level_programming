#include "main.h"

/**
 * print_binary -  a function that prints the binary
 * representation of a number.
 * @n: the string input.
 *
 * Return: nothing.
 */

void print_binary(unsigned long int n)
{
	int i = 0, c = 0;
	unsigned long int val;

	for (i = 63; i >= 0; i--)
	{
		val = n >> i;

		if (val & 1)
		{
			_putchar('1');
			c++;
		}
		else if (c)
		{
			_putchar('0');
		}
	}

	if (!c)
	{
		_putchar('0');
	}
}

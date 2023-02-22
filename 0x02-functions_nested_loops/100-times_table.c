#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * print_times_table - a function that prints the n times table.
 *@n: the first number
 * Return: Always 0.
 */
void print_times_table(int n)
{
	int a, b, c, y;

	if (n >= 0 && n <= 15)
	{
	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			c = a * b;
			if (b != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (c > 99)
			{
				y = (c - (c % 10)) / 10;
				_putchar('0' + ((y - y % 10) / 10));
				_putchar('0' + (y / 10) % 10);
				_putchar('0' + c % 10);
			}
			else if (c > 9)
			{
				_putchar(' ');
				_putchar('0' + ((c - (c % 10)) / 10));
				_putchar('0' + (c % 10));
			}
			else
			{
				if (b != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(c + '0');
			}
		}
		_putchar('\n');
	}
	}
}


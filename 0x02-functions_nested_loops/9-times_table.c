#include "main.h"
#include <unistd.h>

/**
 * times_table - a function that prints the 9 times table
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int a, b, c, x, y;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;
			if (c > 9)
			{
				x = c % 10;
				y = (c - x) / 10;
				_putchar(',');
				_putchar(' ');
				_putchar('0' + y);
				_putchar('0' + x);
			}
			else
			{
				if (b != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(c + '0');
			}
		}
		_putchar('\n');
	}
}


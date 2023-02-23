#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14.
 *
 * Return: 0 always
 */

void more_numbers(void)
{
	int i, j, x, y;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i <= 9)
			{
				_putchar(i + '0');
			}
			else
			{
				x = i % 10;
				y = (i - x) / 10;
				_putchar(y + '0');
				/*_putchar(x + '0');*/
			}
		}
		_putchar('\n');
	}
}

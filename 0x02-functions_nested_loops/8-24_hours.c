#include "main.h"
#include <unistd.h>

/**
 *jack_bauer - a function that prints every minute of the day of Jack Bauer.
 *starting from 00:00 to 23:59.
 *
 * Return: Always 0.
 *On error, -1 is returned, and errno is set appropriately.
 */
void jack_bauer(void)
{

	int a, b, c, d;

	for (a = 0; a <= 2; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			if ((a <= 1 && b <= 9) || (a <= 2 && b <= 3))
			{
				for (c = 0; c <= 5; c++)
				{
					for (d = 0; d <= 9; d++)
					{
						_putchar('0' + a);
						_putchar('0' + b);
						_putchar(':');
						_putchar('0' + c);
						_putchar('0' + d);
						_putchar('\n');
					}
				}
			}
		}
	}
}

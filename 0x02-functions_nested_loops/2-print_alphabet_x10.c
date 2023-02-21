#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char alpha;
	int i;

	for (i = 0; i < 10; i++)
	{
		alpha = 'a';
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
	}
}

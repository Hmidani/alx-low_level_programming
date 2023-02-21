#include <unistd.h>
#include "main.h"

/**
 * print_sign - test alphabet if it is alphabet or not.
 * @n: The character to test.
 *
 * Return: 0 success
 *On error, -1 is returned, and errno is set appropriately.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

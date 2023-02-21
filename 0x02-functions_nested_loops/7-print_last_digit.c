#include "main.h"
#include <unistd.h>

/**
 * print_last_digit - function give the last digit
 *@n: the number
 *
 * Return: Always 0.
 *On error, -1 is returned, and errno is set appropriately.
 */
int print_last_digit(int n)
{

	int c;

	c = n % 10;
	if (c < 0)
	{
		 c = c * -1;
	}
	_putchar(c + '0');
	return (c);
}

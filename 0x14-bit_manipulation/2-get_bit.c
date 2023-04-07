#include "main.h"

/**
 * get_bit - a function that returns the value
 * of a bit at a given index.
 * @n: unsigned int input.
 * @index: unsigned long int input.
 *
 * Return: an integer value.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int b;

	if (index > 63)
	{
		return (-1);
	}

	b = (n >> index) & 1;

	return (b);
}


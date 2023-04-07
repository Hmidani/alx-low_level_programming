#include "main.h"

/**
 * flip_bits - a function that returns the number of bits
 * you would need to flip to get from one number to another.
 * @n: the unsigned long int input.
 * @m: the unsigned long int input.
 *
 * Return: an unsigned int input.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, c = 0;
	unsigned long int t;
	unsigned long int ex = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		t = ex >> i;
		if (t & 1)
		{
			c++;
		}
	}

	return (c);
}


#include "main.h"

/**
 * binary_to_uint -  a function that converts a binary number
 * to an unsigned int.
 * @b: the string input.
 *
 * Return: an unsigned int value.
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;/** len = 0;
*/	unsigned int decemal = 0;

	if (!b)
	{
		return (0);
	}

/**	while (*b++)
	{
		len++;
	}*/
	for (i =0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
		{
			return (0);
		}
		decemal = 2 * decemal + (b[i] - '0');
	}

	return (decemal);
}

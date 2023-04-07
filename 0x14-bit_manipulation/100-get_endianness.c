#include "main.h"

/**
 * get_endianness - a function that checks the endianness.
 *
 * Return: an integer value.
 */

int get_endianness(void)
{
	unsigned int j = 1;
	char *s = (char *) &j;

	return (*s);
}


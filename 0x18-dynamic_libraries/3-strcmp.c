#include "main.h"

/**
 * _strcmp - a function that swaps the values of two integers..
 * @s1: the first String.
 * @s2: the second String.
 *
 * Return: a Integer value.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}

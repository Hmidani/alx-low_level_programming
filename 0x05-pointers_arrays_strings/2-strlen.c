#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 * @s: the string variable.
 *
 * Return: value of the length of string
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s++)
	{
		i++;
	}
	return (i);
}

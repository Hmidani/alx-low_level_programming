#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: the first string input.
 * @accept: the second string input.
 *
 * Return: a string value.
 */

char *_strpbrk(char *s, char *accept)
{
		int i;

		while (*s)
		{
			for (i = 0; accept[i]; i++)
			{
			if (*s == accept[i])
			return (s);
			}
			s++;
		}

	return ('\0');
}


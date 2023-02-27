#include "main.h"

/**
 * rev_string - a function that reverses a string..
 * @s: the String.
 *
 * Return: 0 always
 */

void rev_string(char *s)
{
	int i = 0, length = 0;
	char c;

	while (s[i++])
	{
		length++;
	}

	for (i = length - 1; i >= length / 2; i--)
	{
		c = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = c;
	}
}

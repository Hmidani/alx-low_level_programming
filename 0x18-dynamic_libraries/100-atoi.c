#include "main.h"

/**
 * _atoi -  a function that convert a string to an integer.
 * @s: the String.
 *
 * Return: value always
 */

int _atoi(char *s)
{
	int c = 0, m = 1, i = 0;
	unsigned int n = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			m *= -1;
		}
		while (s[c] >= 48 && s[c] <= 57)
		{
			i = 1;
			n = (n * 10) + (s[c] - '0');
			c++;
		}
		if (i == 1)
		{
			break;
		}
		c++;
	}
	n *= m;
	return (n);
}

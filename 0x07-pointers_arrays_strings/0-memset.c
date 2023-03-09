#include "main.h"
/**
 * _memset -  a function that fills memory with a constant byte.
 * @s: the first string input.
 * @b: the second string input.
 * @n: an integer input.
 *
 * Return: a string value.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}


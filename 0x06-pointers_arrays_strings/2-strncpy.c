#include "main.h"

/**
 * _strncpy - a function that copies a string.
 * @dest: the first String.
 * @src: the second String.
 * @n: a integer.
 *
 * Return: String value always
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (src[i++])
	{
		j++;
	}

	for (i = 0; src[i] && i < n; i++)
	{
		dest[i] = src[i];
	}

	for (i = j; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}

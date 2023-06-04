#include "main.h"

/**
 * _strncat -  a function that concatenates two strings.
 * @dest: the first String.
 * @src: the second String.
 * @n: an integer..
 *
 * Return: a String value always
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}

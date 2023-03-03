#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 * @dest: the first String.
 * @src: the second String.
 *
 * Return: String value always
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, length = 0;

	while (dest[i++])
	{
		length++;
	}

	for (i = 0; src[i]; i++)
	{
		dest[length++] = src[i];
	}

	return (dest);
}

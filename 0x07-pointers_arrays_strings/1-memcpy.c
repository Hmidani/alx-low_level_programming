#include "main.h"
/**
 *_memcpy - a function that copies memory area.
 *@dest: the first string input.
 *@src: the second string input.
 *@n: the integer input.
 *
 *Return: an string value.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int i = n;

	for (; a < i; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}


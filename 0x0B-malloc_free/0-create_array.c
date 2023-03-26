#include "main.h"
#include <stdlib.h>

/**
 * create_array - Float like a butterfly, sting like a bee.
 * @size: the size integer input.
 * @c: the string input.
 *
 * Return: an string value.
 *
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}

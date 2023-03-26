#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - a function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a parameter.
 * @str: the string input.
 *
 * Return: an string value.
 */

char *_strdup(char *str)
{
	char *a;
	int i, v = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	a = malloc(sizeof(char) * (i + 1));

	if (a == NULL)
		return (NULL);

	for (v = 0; str[v]; v++)
		a[v] = str[v];

	return (a);
}

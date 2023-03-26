#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings.
 * @s1: the first string input.
 * @s2: the second string input.
 *
 * Return: an string value.
 */

char *str_concat(char *s1, char *s2)
{
	char *conct;
	int i, c;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	i = c = 0;

	while (s1[i] != '\0')
		i++;
	while (s2[c] != '\0')
		c++;
	conct = malloc(sizeof(char) * (i + c + 1));

	if (conct == NULL)
		return (NULL);
	i = c = 0;
	while (s1[i] != '\0')
	{
		conct[i] = s1[i];
		i++;
	}

	while (s2[c] != '\0')
	{
		conct[i] = s2[c];
		i++, c++;
	}
	conct[i] = '\0';
	return (conct);
}

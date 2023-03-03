#include "main.h"

/**
 * string_toupper - a function that changes all lowercase
 * letters of a string to uppercase.
 * @S: a String input..
 *
 * Return: 0 always
 */

char *string_toupper(char *S)
{
	int i = 0;

	while (S[i])
	{
		if (S[i] >= 'a' && S[i] <= 'z')
		{
			S[i] = S[i] - 32;
		}
		i++;
	}

	return (S);
}

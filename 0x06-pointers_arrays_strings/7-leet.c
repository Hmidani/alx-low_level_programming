#include "main.h"

/**
 * leet - a function that encodes a string into 1337.
 * @S: the String input.
 *
 * Return: String value.
 */

char *leet(char *S)
{
	int i, j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; S[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (S[i] == s1[j])
			{
				S[i] = s2[j];
			}
		}
	}

	return (S);
}

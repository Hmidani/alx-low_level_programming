#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13.
 * @S: the String input.
 *
 * Return: String Value
 */

char *rot13(char *S)
{
	int i, j;
	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; S[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (S[i] == s1[j])
			{
				S[i] = s2[j];
				break;
			}
		}
	}

	return (S);
}

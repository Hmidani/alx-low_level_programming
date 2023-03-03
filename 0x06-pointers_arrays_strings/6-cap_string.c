#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string.
 * @S: the String input.
 *
 * Return: String value
 */

char *cap_string(char *S)
{
	int i = 0;

	while (S[i])
	{
		while (!(S[i] >= 'a' && S[i] <= 'z'))
			i++;

		if (S[i - 1] == ' ' || S[i - 1] == '\t' || S[i - 1] == '\n' || S[i - 1] == ',' || S[i - 1] == ';' || S[i - 1] == '.' || S[i - 1] == '!' || S[i - 1] == '?' || S[i - 1] == '"' || S[i - 1] == '(' || S[i - 1] == ')' || S[i - 1] == '{' || S[i - 1] == '}' || i == 0)
			S[i] -= 32;
		i++;
	}
	return (S);
}

#include <stdio.h>
#include "main.h"

/**
 * _atoi - a program that converts a string to an integer..
 * @s:the String input.
 *
 * Return: an integer value.
 */

int _atoi(char *s)
{
	int i = 0, d = 0, n = 0, length = 0, f = 0, dig = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	while (i < length && f == 0)
	{
		if (s[i] == ' ')
		{
			++d;
		}

		if (s[i] >= '0' && s[i] <= '9')
		{
			dig = s[i] - '0';
			if (d % 2)
				dig = -dig;
			n = n * 10 + dig;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);
	return (n);
}

/**
 * main - a program that multiplies two numbers.
 * @argc: the number of arguments.
 * @argv: the array of arguments.
 *
 * Return: 0 always.
 */

int main(int argc, char *argv[])
{
	int res, n1, n2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = _atoi(argv[1]);
	n2 = _atoi(argv[2]);
	res = n1 * n2;

	printf("%d\n", res);

	return (0);
}

#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * print_to_98 - a function that prints all natural numbers from n to 98
 *@n: the first number
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{
	int a;

	if (n <= 98)
	{
	for (a = n; a <= 98; a++)
	{
		if (a < 98)
		{
		printf("%d, ", a);
		}
		else
		{
		printf("%d", a);
		}
	}
	}
	else if (n > 98)
	{
	for (a = n; a >= 98; a--)
	{
		if (a > 98)
		{
		printf("%d, ", a);
		}
		else
		{
		printf("%d", a);
		}
	}
	}
	printf("\n");
}


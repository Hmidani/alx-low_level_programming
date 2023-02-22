#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * main - a program that prints the first 50 Fibonacci numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	int a = 0;
	long j = 1, k = 2;

	while (a < 50)
	{
		if (a == 0)
		{
			printf("%ld", j);
		}
		else if (a == 1)
		{
			printf(", %ld", k);
		}
		else
		{
			k = k + j;
			j = k - j;
			printf(", %ld", k);
		}
		++a;
	}
	printf("\n");
	return (0);
}


#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * main - list all the natural numbers below 10 that are multiples of 3 or 5.
 *
 * Return: Always 0.
 */
int main(void)
{
	int a, b = 0;

	while (a < 1025)
	{
		if ((a % 3 == 0) || (a % 5 == 0))
		{
			b = b + a;
		}
		a++;
	}
	printf("%d\n", b);
	return (0);
}


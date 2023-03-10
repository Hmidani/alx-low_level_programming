#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/**
 * main - a program that finds, prints the largest prime factor of the number.
 *
 * Return: 0 always
 */

int main(void)
{
	long i, maxf, num;
	double sqr;

	num = 612852475143;
	sqr = sqrt(num);

	for (i = 1; i <= sqr; i++)
	{
		if (num % i == 0)
		{
			maxf = num / i;
		}
	}
	printf("%ld\n", maxf);

	return (0);
}

#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * main - a program that finds and prints the first 98 Fibonacci numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i = 0;
	unsigned long f1 = 0, f2 = 1, sum, fh11, fh12, fh21, fh22;
	unsigned long h1, h2;

	for (i = 0; i < 92; i++)
	{
	sum = f1 + f2;
	printf("%lu, ", sum);
	f1 = f2;
	f2 = sum;
	}
	fh11 = f1 / 10000000000;
	fh21 = f2 / 10000000000;
	fh12 = f1 % 10000000000;
	fh22 = f2 % 10000000000;
	for (i = 93; i < 99; i++)
	{
	h1 = fh11 + fh21;
	h2 = fh12 + fh22;
	if (fh12 + fh22 > 9999999999)
	{
	h1 += 1;
	h2 %= 10000000000;
	}
	printf("%lu%lu", h1, h2);
	if (i != 98)
	printf(", ");
	fh11 = fh21;
	fh12 = fh22;
	fh21 = h1;
	fh22 = h2;
	}
	printf("\n");
	return (0);
}


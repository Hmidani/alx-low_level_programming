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
	long j = 1, k = 2, sum = k;

	while (k + j < 4000000)
	{
	k += j;
	if (k % 2 == 0)
	sum += k;
	j = k - j;
	++a;
	}
	printf("%ld\n", sum);
	return (0);
}


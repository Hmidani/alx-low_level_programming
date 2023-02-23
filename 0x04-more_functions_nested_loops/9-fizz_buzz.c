#include <stdio.h>

/**
 * main - a program that prints the numbers from 1 to 100
 *
 * Return: 0 always
 */

int main(void)
{
	int j;

	for (j = 1; j <= 100; j++)
	{
		if (j % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else if (j % 5 == 0)
		{
			printf("Buzz");
		}
		else if (j % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", j);
		}
		if (j != 100)
		{
			printf(" ");
		}
	}
	printf("\n");

	return (0);
}

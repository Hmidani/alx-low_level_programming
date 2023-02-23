#include "main.h"

/**
 * print_triangle - a function that prints a triangle.
 * @size: the number of times.
 *
 * Return: 0 always
 */

void print_triangle(int size)
{
	int j, i, k;

	for (k = 1; k <= size; k++)
	{
		for (j = size - k; j > 0; j--)
		{
			printf(" ");
		}
		for (i = 1; i <= k; i++)
		{
			printf("#");
		}
		printf("\n");
	}
	if (size <= 0)
		printf("\n");
}

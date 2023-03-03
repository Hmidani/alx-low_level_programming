#include "main.h"

/**
 * reverse_array - a function that reverses the content of
 * an array of integers.
 * @a: the first input.
 * @n: the second input.
 *
 * Return: 0 always
 */

void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}

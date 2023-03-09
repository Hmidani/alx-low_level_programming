#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number.
 * @n: the integer input.
 *
 * Return: an integer value.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}


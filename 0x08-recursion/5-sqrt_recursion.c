#include "main.h"

int aktuell_sqrt_recursion(int a, int b);

/**
 * _sqrt_recursion - a function that returns the natural square
 * root of a number.
 * @n: the integer input.
 *
 * Return: an integer value.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (aktuell_sqrt_recursion(n, 0));
}

/**
 * aktuell_sqrt_recursion - a fonction that returns recurses
 * to find the natural square root of an number
 * @a: the first input.
 * @b: the second input.
 *
 * Return: an integer value.
 */
int aktuell_sqrt_recursion(int a, int b)
{
	if (b * b > a)
		return (-1);
	if (b * b == a)
		return (b);
	return (aktuell_sqrt_recursion(a, b + 1));
}


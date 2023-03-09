#include "main.h"

int aktuell_prime(int a, int b);

/**
 * is_prime_number - a function that returns 1 if the input
 * integer is a prime number, otherwise return 0.
 * @n: the integer input.
 *
 * Return: an integer value.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (aktuell_prime(n, n - 1));
}

/**
 * aktuell_prime - a fonction that returns a number if is
 * prime recursively
 * @a: the first input.
 * @b: the second input.
 *
 * Return: an integer value.
 */
int aktuell_prime(int a, int b)
{
	if (b == 1)
		return (1);
	if (a % b == 0 && b > 0)
		return (0);
	return (aktuell_prime(a, b - 1));
}


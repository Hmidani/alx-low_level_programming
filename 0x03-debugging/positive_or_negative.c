#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * positive_or_negative - a function that test if negative, positive or null.
 *@a: value 1
 *
 * Return: Always 0.
 *On error, -1 is returned, and errno is set appropriately.
 */

void positive_or_negative(int n)
{

if (n > 0)
{
	printf("%d is positive\n", n);
}
else if (n == 0)
{
	printf("%d is zero\n", n);
}
else
{
	printf("%d is negative\n", n);
}
}

#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * positive_or_negative - a function that test if negative, positive or null.
 *@i: value 1
 *
 * Return: Always 0.
 *On error, -1 is returned, and errno is set appropriately.
 */

void positive_or_negative(int i)
{

if (i > 0)
{
	printf("%d is positive\n", i);
}
else if (i == 0)
{
	printf("%d is zero\n", i);
}
else
{
	printf("%d is negative\n", i);
}
}

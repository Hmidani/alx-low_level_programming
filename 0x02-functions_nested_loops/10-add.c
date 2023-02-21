#include "main.h"
#include <unistd.h>

/**
 * add - a function that adds two integers and returns the result.
 *@a: value 1
 *@b: value 2
 *
 * Return: Always 0.
 *On error, -1 is returned, and errno is set appropriately.
 */
int add(int a, int b)
{
	int r;

	r = a + b;
	return (r);
}


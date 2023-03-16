#include "main.h"

/**
 * _isdigit - a function that checks for a digit (0 through 9).
 * @c: the number
 *
 * Return: 0 or 1 if the number digit or not.
 */

int _isdigit(int c)
{
	int val;

	if (c >= 48 && c <= 57)
	{
		val = 1;
	}
	else
	{
		val = 0;
	}

	return (val);
}

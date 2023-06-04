#include <stdio.h>
#include "main.h"

/**
 * _isupper -  a function that checks for uppercase character.
 * @c: the number
 *
 * Return: 0 or 1 if character upper or not.
 */

int _isupper(int c)
{
	int val;

	if (c >= 65 && c <= 90)
	{
		val = 1;
	}
	else
	{
		val = 0;
	}

	return (val);
}

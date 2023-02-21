#include <unistd.h>
#include "main.h"

/**
 * _islower - test alphabet if lower or not
 *
 * Return: 0 success
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

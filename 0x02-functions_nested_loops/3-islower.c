#include <unistd.h>
#include "main.h"

/**
 * _islower - test alphabet if lower or not.
 * @c: The character to test.
 *
 * Return: 0 success
 *On error, -1 is returned, and errno is set appropriately.
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

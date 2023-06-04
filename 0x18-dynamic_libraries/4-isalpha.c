#include <unistd.h>
#include "main.h"

/**
 * _isalpha - test alphabet if it is alphabet or not.
 * @c: The character to test.
 *
 * Return: 0 success
 *On error, -1 is returned, and errno is set appropriately.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

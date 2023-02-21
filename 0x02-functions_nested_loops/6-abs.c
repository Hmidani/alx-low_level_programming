#include <unistd.h>
#include "main.h"

/**
 * _abs - calcule de la valeur absolut.
 * @n: The number.
 *
 * Return: 0 success
 *On error, -1 is returned, and errno is set appropriately.
 */
int _abs(int n)
{
	if (n < 0)
	{
		int vabs;

		vabs = n * -1;
		return (vabs);
	}
	else
	{
		return (n);
	}
}

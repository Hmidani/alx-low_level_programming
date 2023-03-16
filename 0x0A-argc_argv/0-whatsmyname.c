#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints its name.
 * @argc: the number of arguments.
 * @argv: the array of arguments.
 *
 * Return: 0 always.
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}

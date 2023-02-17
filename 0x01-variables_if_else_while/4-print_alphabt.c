#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */
/**
 * main - A program that prints the alphabet in lowercase without q and e
 * Return: 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int i;
	char alpha = 'a';

	for (i = 0; i < 26; i++)
	{
		if (alpha != 'q' && alpha != 'e')
			putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}

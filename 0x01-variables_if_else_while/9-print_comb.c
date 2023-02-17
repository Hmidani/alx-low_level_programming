#include <stdlib.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - prints all single digit numbers hexadecimal
 * Return: 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}

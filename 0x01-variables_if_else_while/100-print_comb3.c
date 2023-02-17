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
	int i, j;

	for (i = 0; i <= 8; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			if (i != j)
			{
				putchar(i + '0');
				putchar(j + '0');
			}
			if ((i*10 + j) != 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

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

	while (i <= 15)
	{
		if (i == 10 || i == 11 || i == 12 || i == 13 || i == 14 || i == 15)
		{
			putchar('a' + i % 10);
		}
		else
		{
			putchar(i + '0');
		}
		i++;
	}
	putchar('\n');
	return (0);
}

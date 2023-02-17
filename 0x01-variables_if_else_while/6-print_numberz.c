#include <stdlib.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - prints all single digit numbers of 10 base using putchar
 * Return: 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');
	return (0);
}

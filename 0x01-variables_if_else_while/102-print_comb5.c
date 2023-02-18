#include <stdio.h>
/* more headers goes there */
/**
 * main - prints all single digit numbers combinaison
 * Return: 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int i1, i2, j1, j2, k1, k2;

	k1 = 0;

	while (k1 <= 98)
	{
		i1 = (k1 / 10 + '0');
		i2 = (k1 % 10 + '0');
		k2 = 0;
		while (k2 <= 99)
		{
			j1 = (k2 / 10 + '0');
			j2 = (k2 % 10 + '0');
			if (k1 < k2)
			{
				putchar(i1);
				putchar(i2);
				putchar(' ');
				putchar(j1);
				putchar(j2);
			}
			if (k1 != 98)
			{
				putchar(',');
				putchar(' ');
			}
			k2++;
		}
		k1++;
	}
	putchar('\n');
	return (0);
}

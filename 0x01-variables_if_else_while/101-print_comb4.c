#include <stdio.h>
/* more headers goes there */
/**
 * main - prints all single digit numbers combinaison
 * Return: 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int i, j, k;

	for (i = 0; i <= 7; i++)
	{
		for (j = i + 1; j <= 8; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
				if (i != j && i != k && j != k)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
				}
				if ((i * 100 + j * 10 + k) != 789)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

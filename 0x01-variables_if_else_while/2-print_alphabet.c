#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */
/**
 * main - A program that prints the alphabet in lowercase
 * Return: 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int i;
	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 26; i++)
	{
		putchar(alpha[i]);
	}
	putchar('\n');
	return (0);
}

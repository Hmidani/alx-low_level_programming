#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -  program that generates random valid passwords.
 *for the program 101-crackme
 *
 * Return: 0 always
 */

int main(void)
{
	int i = 0, s = 0, diff_h1, diff_h2;
	char pass[84];

	srand(time(0));

	while (s < 2772)
	{
		pass[i] = 33 + rand() % 94;
		s += pass[i++];
	}

	pass[i] = '\0';

	if (s != 2772)
	{
		diff_h1 = (s - 2772) / 2;
		diff_h2 = (s - 2772) / 2;

		if ((s - 2772) % 2 != 0)
			diff_h1++;

		for (i = 0; pass[i]; i++)
		{
			if (pass[i] >= (33 + diff_h1))
			{
				pass[i] -= diff_h1;
				break;
			}
		}

		for (i = 0; pass[i]; i++)
		{
			if (pass[i] >= (33 + diff_h2))
			{
				pass[i] -= diff_h2;
				break;
			}
		}
	}
	printf("%s", pass);
	return (0);
}

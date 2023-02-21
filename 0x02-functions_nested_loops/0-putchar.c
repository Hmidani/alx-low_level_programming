#include <stdio.h>
#include "main.h"
/**
 * main - A programm that prints _putchar, followed by a new line.
 * Return: 0 (Success)
 */
int main(void)
{
	char txt[] = "_putchar";
	int i, length;

	length = (int)(sizeof(txt) / sizeof(txt[0]));
	for (i = 0; i <= length; i++)
	{
		_putchar(txt[i]);
	}
	_putchar('\n');
	return (0);
}

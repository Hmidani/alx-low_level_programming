#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: The file name input.
 * @text_content: Content input.
 *
 * Return: an integer value.
 */

int create_file(const char *filename, char *text_content)
{
	int f;
	int lower;
	int number_leters;

	if (!filename)
	{
		return (-1);
	}

	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (f == -1)
	{
		return (-1);
	}

	if (!text_content)
	{
		text_content = "";
	}

	for (number_leters = 0; text_content[number_leters]; number_leters++)
		;
	lower = write(f, text_content, number_leters);

	if (lower == -1)
	{
		return (-1);
	}

	close(f);

	return (1);
}


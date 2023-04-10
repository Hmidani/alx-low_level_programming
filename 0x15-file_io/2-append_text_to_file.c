#include "main.h"

/**
 * append_text_to_file - a function that appends text at
 * the end of a file.
 * @filename: the name of the file input.
 * @text_content: The string input.
 *
 * Return: an integer value.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wd, length = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	wd = write(op, text_content, length);

	if (op == -1 || wd == -1)
	{
		return (-1);
	}

	close(op);

	return (1);
}


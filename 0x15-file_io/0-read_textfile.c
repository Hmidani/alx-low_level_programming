#include "main.h"

/**
 * read_textfile - a function that reads a text file and
 * prints it to the POSIX standard output.
 * @filename: the const char input.
 * @letters: the size_t input.
 *
 * Return: an ssize_t value.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t lorder, lower;
	char *buffer;

	if (!filename)
	{
		return (0);
	}

	f = open(filename, O_RDONLY);

	if (f == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * (letters));

	if (!buffer)
	{
		return (0);
	}

	lorder = read(f, buffer, letters);
	lower = write(STDOUT_FILENO, buffer, lorder);

	close(f);

	free(buffer);

	return (lower);
}

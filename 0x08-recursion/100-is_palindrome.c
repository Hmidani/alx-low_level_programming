#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - a function that returns 1 if a
 * string is a palindrome and 0 if not.
 * @s: string input.
 *
 * Return: an integer value.
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - a function returns the length of a string
 * @s: string input.
 *
 * Return: an integer value.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - a function checks the characters recursively for palindrome
 * @s: string input.
 * @i: integer input.
 * @len: integer input.
 *
 * Return: an integer value.
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}

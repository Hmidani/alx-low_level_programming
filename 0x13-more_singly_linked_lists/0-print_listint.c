#include "lists.h"

/**
 * print_listint - a function that prints all the elements
 * of a listint_t list.
 * @h: the linked list of listint_t type.
 *
 * Return: a value type size_t.
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}


#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list.
 * @head: the pointeur of listint_t type.
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}


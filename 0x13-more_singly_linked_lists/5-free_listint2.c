#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: the pointer of listint_t type.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}


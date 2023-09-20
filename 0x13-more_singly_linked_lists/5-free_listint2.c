#include "lists.h"

/**
 * free_listint2 - Frees a linked list.
 * @head: Pointer to the listint_t list to be freed.
 */

void free_listint2(listint_t **head)
{
	listint_t *jm;

	if (head == NULL)
		return;
	while (*head)
	{
		jm = (*head)->next;
		free(*head);
		*head = jm;
	}

	*head = NULL;
}

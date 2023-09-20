#include "lists.h"

/**
 * pop_listint - Removes the first element from a linked list.
 * @head: Pointer to the first element in the linked list.
 *
 * Returns: The value of the removed element, or 0 if the list is empty.
 */

int pop_listint(listint_t **head)
{
	listint_t *jm;
	int jm1;

	if (!head || !*head)
		return (0);
	jm1 = (*head)->n;
	jm = (*head)->next;
	free(*head);
	*head = jm;

	return (jm1);
}

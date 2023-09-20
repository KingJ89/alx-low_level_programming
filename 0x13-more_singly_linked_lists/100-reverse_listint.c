#include "lists.h"

/**
 * reverse_listint - Reverses linked list.
 * @head: Pointer to the firt node in the list.
 * Return: Pointer to the first node in the new list.
 */

listint_t *reverse_listint(listint_t **head)

{
	listint_t *jm1 = NULL;
	listint_t *jm2 = NULL;

	while (*head)
	{
		jm2 = (*head)->next;
		(*head)->next = jm1;
		jm1 = *head;
		*head = jm2;
	}
	*head = jm1;
	return (*head);
}

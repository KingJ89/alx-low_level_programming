#include "lists.h"

/**
 * add_nodeint_end - Adds node at end of list.
 * @head: Pointer to first element in list.
 * @n: info to insert in new element.
 *
 * Return: Pointer to the new node, or NULL if it fails.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *jm1;
	listint_t *JM;

	jm1 = malloc(sizeof(listint_t));
	if (!jm1)
	{
		return (NULL);
	}
	jm1->n = n;
	jm1->next = NULL;

	if (*head == NULL)
	{
		*head = jm1;
		return (jm1);
	}
	JM = *head;

	while (JM->next)
		JM = JM->next;
	JM->next = jm1;
	return (jm1);
}

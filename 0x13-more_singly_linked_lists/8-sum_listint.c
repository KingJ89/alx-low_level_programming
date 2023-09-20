#include "lists.h"

/**
 * sum_listint - Calculates the sum of all the data
 * @head: Pointer to the first node in the linked list.
 *
 * Return: The resulting sum.
 */

int sum_listint(listint_t *head)
{
	int result = 0;
	listint_t *jm = head;

	while (jm)
	{
		result += jm->n;
		jm = jm->next;
	}
	return (result);
}

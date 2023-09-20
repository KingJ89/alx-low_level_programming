#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t free_listint_safe(listint_t **h);
/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *jm = head, *jm1 = head;
	size_t jm_fizz_buzz_nodes = 1;

	if (jm == NULL || jm->next == NULL)
		return (0);

	jm = jm->next;
	jm1 = (jm1->next)->next;

	while (jm1)
	{
		if (jm == jm1)
		{
			jm = head;
			while (jm != jm1)
			{
				jm_fizz_buzz_nodes++;
				jm = jm->next;
				jm1 = jm1->next;
			}
			jm = jm->next;

			while (jm != jm1)
			{
				jm_fizz_buzz_nodes++;
				jm = jm->next;
			}
			return (jm_fizz_buzz_nodes);
		}
		jm = jm->next;
		jm1 = (jm1->next)->next;
	}
	return (0);
}

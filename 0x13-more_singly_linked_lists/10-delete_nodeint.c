#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes node in a linked list at certain index.
 * @head: Pointer to the first element in the list.
 * @index: Index of the node to delete.
 *
 * Return: 1 (Success), or -1 (Fail).
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *jm_node = *head;
	listint_t *jm1_node = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(jm_node);
		return (1);
	}

	while (i < index)
	{
		if (jm_node == NULL)
			return (-1);
		jm1_node = jm_node;
		jm_node = jm_node->next;
		i++;
	}
	if (jm_node == NULL)
		return (-1);
	jm1_node->next = jm_node->next;
	free(jm_node);
	return (1);
}

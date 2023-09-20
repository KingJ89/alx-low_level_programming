#include "lists.h"

/**
 * get_nodeint_at_index - Retrieves the node
 * @head: Pointer to the first node in the linked list.
 * @index: Index of the node to retrieve.
 *
 * Return: Pointer to the desired node, or NULL if not found.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current_node = head;

	while (current_node && count < index)
	{
		current_node = current_node->next;
		count++;
	}
	return (current_node ? current_node : NULL);
}

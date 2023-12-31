#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a linked list
 * @head: A pointer to the list_t list to be freed
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		if (head->str)
			free(head->str);
		free(head);
		head = temp;
	}
}

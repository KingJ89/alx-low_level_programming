#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len - Returns the number of elements in a linked list
 * @h: Linked list of type listint_t to traverse
 *
 * Description: This function counts the number of nodes in the linked list.
 *
 * Return: The number of nodes in the linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t jm = 0;

	while (h != NULL)
	{
		h = h->next;
		jm++;
	}
	return (jm);
}

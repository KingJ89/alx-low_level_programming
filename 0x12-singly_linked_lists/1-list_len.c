#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * list_len - prints number of elements in a linked list
 * @h: pointer to list_t list
 * Return: elements in h
 */

size_t list_len(const list_t *h)

{
	size_t jm = 0;

	while (h)
	{
		jm++;
		h = h->next;
	}
	return (jm);
}

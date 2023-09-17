#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *print_list - prints elements of a linked list
 *@h: pointer to list_t
 *Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t jm1 = 0;

	while (h)
	{
	if (!h->str)
		printf("[0] (nil)\n");
	else
		printf("[%u] %s\n", h->len, h->str);
	}
		h = h->next;
		jm1++;
	return (jm1);
}

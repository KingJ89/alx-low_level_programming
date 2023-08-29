#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *print_list - prints elements of a linked list
 *@h: pointer to list_t
 *@next: pointer
 *@str: string literal
 *@len: length
 *Return: number of nodes
 */

size_t print_list(const list_t *h)

{
	int jm1 = 0;

	while (h)
	{
		if (!h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		jm1++;
		h = h->next;
	}
	return (jm1);
}

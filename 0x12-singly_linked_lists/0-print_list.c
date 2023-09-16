#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
	int jm = 0;

	while (h)
	{
		if (!h->jm == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->jm1, h->jm);
		}
		jm++;
		h = h->next;
	}
	return (jm);
}

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
	size_t jm1 = 0;
	char str = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->jm1, h->str);
		h = h->next;
	jm1++;
	}
	return (jm1);
}

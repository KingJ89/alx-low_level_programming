#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>


/**
 *print_list - prints elements of a linked list according to params
 *@h: pointer to list
 *Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t jm1 = 0;

	while (h)
	{
		printf("[%lu] %s\n", (unsigned long)(h->len), (h->str ? h->str : "(nil)"));
		h = h->next;
		jm1++;
	}
	return jm1;
}

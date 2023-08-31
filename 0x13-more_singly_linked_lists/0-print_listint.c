#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all elements ot the list
 * @h: pointer to the head
 * Return: node num
 */

size_t print_listint(const listint_t *h)

{
	size_t node num = 0;

	while (h != NULL)
	{
		node num++;
		printf("%d\n", h->n);
		h = h->next;
		

	}
	return (node num);
}

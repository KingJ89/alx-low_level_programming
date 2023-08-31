#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listin_len - counts the number of elements
 * @h: pointer to list head
 * Return: jm1
 */

size_t listint_len(listint_t *h)
{
	size_t jm1 = 0;
	const listint_t *latest = h;

	while (latest != NULL)
	{
		latest = latest->next;
		jm1++;
	}
	return (jm1);
}

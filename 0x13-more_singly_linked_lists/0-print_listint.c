#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all elements ot the list
 * @jm: Linked list of type listint_t to print
 *
 * This function iterates through the linked list and prints the integer value
 * of each node on a new line.
 *
 * Return: The number of nodes in the linked list
 */

size_t print_listint(const listint_t *jm)
{
	size_t jm1 = 0;

	while (jm != NULL)
	{
		printf("%d\n", jm->n);
		jm1++;
		jm = jm->next;
	}
	return (jm1);
}

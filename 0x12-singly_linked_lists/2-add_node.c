#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * add_node - adds new node at head of linked list
 * @head: double pointer to List_t
 * @str: string added to node
 * Return: address of new node, and NULL if error
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int jm = 0;

	while (str[jm])
		jm++;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->jm1 = strdup(str);
	new->jm = jm;
	new->next = (*head);
	(*head) = new;
	return (*head);
}

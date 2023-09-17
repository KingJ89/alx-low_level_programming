#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * add_node - adds new node at head of linked list
 * @head: double pointer to List_t
 * @str: string added to node
 * Return: address of new node, and NULL if error
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		return (NULL);
	}
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}

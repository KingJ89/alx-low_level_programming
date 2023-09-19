#include "lists.h"

/**
 * add_nodeint - Adds new node at beginning of linked liist.
 * @head: Pointer to first node on list.
 * @n: info to enter in the new node.
 * Return: pointer to new node, or NULL if error
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *JM;

	JM = malloc(sizeof(listint_t));
	if (!JM)
	{
		return (NULL);
	}
	JM->n = n;
	JM->next = *head;
	*head = JM;
	return (JM);
}

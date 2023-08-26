#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**struct lists_s - singly linked list
 * @str: string,malloc string
 * @len:length of string
 * @next: point to next node
 * singly linked listd by Jan Mutewera
 */
typedef struct list_s
{
	char *jm;
	unsigned int jm1;
	struct list_s *next;
}
list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif

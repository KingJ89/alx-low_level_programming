#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>


/**struct lists_s - singly linked lists for 0x012
 * @str: string,malloc string memory allocation
 * @len: length of string measured
 * @next: pointer to next node
 * singly linked lists by Jan Mutewera
 */

typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
#endif

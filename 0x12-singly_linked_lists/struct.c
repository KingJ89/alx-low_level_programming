#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */

typedef struct list_s

{
	char *jm;
	unsigned int jm1;
	struct list_s *next;
}
list_t;

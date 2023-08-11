#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - Memory allocator
 * @b: the size to allocate
 * Return: (0).
 */

void *malloc_checked(unsigned int b)
{
	void *jm;

	jm = malloc(b);

	if (jm == NULL)
		exit(98);
	return (jm);
}

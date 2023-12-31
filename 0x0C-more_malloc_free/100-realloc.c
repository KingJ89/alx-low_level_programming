#include <stdio.h>
#include "main.h"
#include <stdlib.h>


/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: A pointer to the memory previously allocated with malloc
 * @old_size: The size, in bytes, of the allocated space for ptr
 * @new_size: The new size, in bytes, of the new memory block
 *
 * Return: A pointer to the reallocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int min_size, i;
	unsigned char *old_ptr, *new_ptr_uchar;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	min_size = old_size < new_size ? old_size : new_size;
	old_ptr = ptr;
	new_ptr_uchar = new_ptr;

	for (i = 0; i < min_size; i++)
		new_ptr_uchar[i] = old_ptr[i];

	free(ptr);

	return (new_ptr);
}

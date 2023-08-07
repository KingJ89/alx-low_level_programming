#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of characters according to params
 * @size: siize of array
 * @c: content of array
 * Return: array full
 */

char *create_array(unsigned int size, char c)
{
	unsigned int jm;
	char *s;

	if (size == 0)
	return (NULL);

	s = malloc(size * sizeof(char));

	if (s == NULL)
	return (NULL);

	for (jm = 0; jm < size; jm++)
	{
		s[jm] = c;
	}

	return (s);

}

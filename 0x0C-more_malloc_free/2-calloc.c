#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates an amount of memory nd initializes it to 0
 * @nmemb: number of members
 * @size: size allocated
 *Return: p the malloc
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int a = 0, b = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	b = nmemb * size;
	p = malloc(b);

	if (p == NULL)
		return (NULL);

	while (a < b)
	{
		p[a] = 0;
		a++;
	}

	return (p);
}

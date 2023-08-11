#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - prints an array range according to params
 * @min: minimum in range
 * @max: maximum of range
 * Return:value integer
 */

int *array_range(int min, int max)
{
	int *a, b = 0;

	if (min > max)
		return (NULL);
	a = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (a == NULL)
		return (NULL);

	while (min <= max)
	{
		a[b] = min;
		b++;
		min++;
	}
	return (a);
}

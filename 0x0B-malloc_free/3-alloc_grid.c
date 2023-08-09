#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - allocates grid spaces according to params.
 * @width: is the witdth of the grid
 * @height: is the heigth of the grid
 * Return: a on success and 0 on error
 */

int **alloc_grid(int width, int height)

{
	int jm, jm1, jm2, jm3;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(sizeof(int *) * height);

	if (a == NULL)
	{
		free(a);
		return (NULL);
	}

	for (jm = 0; jm < height; jm++)
		a[jm] = malloc(sizeof(int) * width);

	if (a[jm] == NULL)
	{
		for (jm1 = jm; jm1 >= 0; jm1--)
		{
			free(a[jm1]);
		}

		free(a);
		return (NULL);
	}
	for (jm2 = 0; jm2 < height; jm2++)
	{
	for (jm3 = 0; jm3 < width; jm3++)
	{
		a[jm2][jm3] = 0;
	}
	}
	return (a);
}

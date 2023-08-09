#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - prints an elastic grid
 * @grid: pointer of the grid to be printed
 * @height: height of the grid
 *
 * Return: success
 */

void free_grid(int **grid, int height)
{
	int jm;

	for (jm = 0; jm < height; jm++)
	{
	free(grid[jm]);
	}
	free(grid);
}


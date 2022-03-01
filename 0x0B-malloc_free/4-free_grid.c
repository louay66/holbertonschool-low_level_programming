#include <unistd.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - clear memoir
 *@grid:grid you want to clear
 *@height: height of grid
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

#include <unistd.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 ***alloc_grid - create grid
 *@width:width of grid
 *@height: height of grid
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **x;

	if (width <= 0 || height <= 0)
		return (NULL);
			x = malloc(height * sizeof(int));
	if (x == NULL)
	{
		free(x);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		x[i] = malloc(width * sizeof(int));
		if (x == NULL)
		{
			free(x);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			x[i][j] = 0;
		}
	}
	return (x);
}



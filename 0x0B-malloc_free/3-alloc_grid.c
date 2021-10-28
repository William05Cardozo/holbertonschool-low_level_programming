#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Funtion
 * @width: rows
 * @height: Colums
 * Return: grid
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int a, b;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(height * sizeof(*grid));

	if (grid == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < height; a++)
	{
		grid[a] = malloc(width * sizeof(**grid));

				if (grid[a] == NULL)
				{
					for (a--; a >= 0; a--)
					{
						free(grid[a]);
						return (NULL);
					}

					free(grid);
				}

				for (b = 0; b < width; b++)
				{
					grid[a][b] = 0;
				}
	}

	return (grid);
}

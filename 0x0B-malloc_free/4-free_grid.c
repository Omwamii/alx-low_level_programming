#include <stdlib.h>
#include "main.h"

/**
  *free_grid - frees mem allocated
  *@grid: pointer to grid allocated
  *@height: rowspan
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

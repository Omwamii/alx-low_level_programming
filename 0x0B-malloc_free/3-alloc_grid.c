#include <stdlib.h>
#include "main.h"

/**
  *alloc_grid - returns ptr to 2d array
  *@width: columns
  *@height: rows
  *
  *Return: ptr to 2d integer array
  */
int **alloc_grid(int width, int height)
{
	if (!(width <= 0 || height <= 0))
	{
		int i, j;
		int **dest = malloc(sizeof(int *) * height);

		if (dest)
		{
			for (i = 0; i < height; i++)
			{
				dest[i] = malloc(sizeof(int *) * width);
				if (dest[i] == NULL)
				{
					for (; i > 0; i--)
					{
						free(dest[i]);
					}

					free(dest);
					return (NULL);
				}

				for (j = 0; j < width; j++)
					dest[i][j] = 0;
			}

			return (dest);
		}

		return (NULL);
	}

	return (NULL);
}


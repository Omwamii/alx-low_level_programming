#include <stdlib.h>
#include "main.h"

/**
  *array_range - creates array of integers
  *@min: min
  *@max: max
  *
  *Return: ptr to array
  */

int *array_range(int min, int max)
{
	if (!(min > max))
	{
		int memb = (max - min) + 1;
		int *dest = malloc(sizeof(int) * memb);
		int i = 0, mn = min;

		if (dest)
		{
			while (i <= memb - 1)
				dest[i++] = mn++;

			return (dest);
		}

		return (NULL);
	}

	return (NULL);
}

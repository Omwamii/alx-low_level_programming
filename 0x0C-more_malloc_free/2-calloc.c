#include <stdlib.h>
#include "main.h"

/**
  *_calloc - allocate mem for array
  *@nmemb: elements of array
  *@size: size of variable
  *
  *Return: pointer to allocated mem
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (nmemb)
	{
		char *dest = malloc(size * nmemb);

		if (dest)
		{
			unsigned int i;

			for (i = 0; i < (size * nmemb); i++)
			{
				dest[i] = 0;
			}

			return (dest);
		}

		return (NULL);
	}

	return (NULL);
}

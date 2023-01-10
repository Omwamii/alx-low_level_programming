#include <stdlib.h>
#include "main.h"

/**
  *create_array - creates array of chars and initializes
  *with specific char
  *@size: size of array
  *@c: char to be set to array
  *
  *Return: Null if size is 0, or if fails, else ptr to array
  */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;
	ar = malloc(sizeof(char) * size);

	if (ar == NULL || size == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			ar[i] = c;
		}
		return (ar);
	}
}

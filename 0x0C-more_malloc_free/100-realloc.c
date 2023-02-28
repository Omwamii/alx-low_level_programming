#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
  *_realloc - reallocates memory
  *@ptr: ptr to previously allocated block
  *@old_size: old mem size
  *@new_size: new mem size to be allocated
  *
  *Return: ptr to mem block or NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_mem;
	unsigned int i;

	if (ptr == NULL)
	{
		new_mem = malloc(new_size);
		if (new_mem == NULL)
			return (NULL);
		return (new_mem);
	}

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	new_mem = malloc(new_size);
	if (new_mem == NULL)
		return (NULL);

	for (i = 0; i < old_size; i++)
	{
		*((char *)new_mem + i) = *((char *)ptr + i);
	}

	return (new_mem);
}

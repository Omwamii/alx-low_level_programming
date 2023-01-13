#include <stdlib.h>
#include "main.h"

/**
  *malloc_checked - allocates mem
  *@b: size of mem
  *
  *Return:  pointer to allocated mem
  */

void *malloc_checked(unsigned int b)
{
	void *new = malloc(b);

	if (new == NULL)
		exit(98);
	else
		return (new);
}

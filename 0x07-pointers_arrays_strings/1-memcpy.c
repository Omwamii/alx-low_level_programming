#include "main.h"

/**
 *_memcpy - copies data from src memory to dest
 *@dest: destination memory
 *@src: source memory
 *@n: size of mem to copy
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			*(dest + i) = *(src + i);
		}
	}
	return (dest);
}

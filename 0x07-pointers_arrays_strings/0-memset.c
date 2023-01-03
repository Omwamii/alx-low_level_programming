#include "main.h"

/**
 * _memset - fills block of memory with character
 * @s: pointer to block of string
 * @b: character to be filled in mem block
 * @n: size of memory to set
 *
 * Return: pointer to string
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}

#include "main.h"

/**
 * _strcpy - copies string pointed to a buffer
 * @dest: pointer to buff
 * @src: source string pointer
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		dest[i] = *(src + i);
	}
	dest[i] = '\0';

	return (dest);
}

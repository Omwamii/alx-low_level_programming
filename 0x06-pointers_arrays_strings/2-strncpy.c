#include "main.h"

/**
  *_strncpy - copies a string
  *@dest: destination string
  *@src: source
  *@n: number of chrs
  *Return: pointer to string
  */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}

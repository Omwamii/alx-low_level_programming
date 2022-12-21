#include "main.h"

/**
  *_strncat - concatenates strings to nth
  *@dest: first string
  *@src: second string
  *@n: numbers of chars to concat
  *Return: pointer to string
  */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (; j < n && src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';

	return (dest);
}

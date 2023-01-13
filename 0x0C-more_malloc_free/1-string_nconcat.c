#include <stdlib.h>
#include "main.h"

/**
  * _strlen - finds size of string
  *@str: string to be scanned
  *
  *Return: size
  */

int _strlen(char *str)
{
	unsigned int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
  *string_nconcat - concatenates strings
  *@s1: lead string
  *@s2: tail string
  *@n: size of s2 to scan
  *
  *Return: ptr to concated str
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k;
	char *dest;
	unsigned int size1 = _strlen(s1);
	unsigned int size2 = _strlen(s2);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= size2)
		n = size2;
	dest = malloc((size1 + n) + 1);

	if (dest == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		dest[i] = s1[i];

	for (j = i, k = 0; k < n; j++, k++)
		dest[j] = s2[k];

	dest[j + 1] = '\0';

	return (dest);
}

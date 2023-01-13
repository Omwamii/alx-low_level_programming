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
	int i = 0;

	if (str == NULL)
	{
		str[0] = '\0';
	}
	while (*str != '\0')
	{
		i++;
	}

	return (i);
}

/**
  *string_nconcat - concatenates strings
  *@s1: lead string
  *@s2: tail string
  *
  *Return: ptr to concated str
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1 = _strlen(s1);
	unsigned int size2 = _strlen(s2);
	unsigned int i,j,k;
	char *dest = malloc((size1 + n) + 1);

	if (n >= size2)
		n = size2;

	if (dest)
	{
		for (i = 0; i < size1; i++)
		{
			dest[i] = s1[i];
		}

		for (j = i, k = 0; j < n; j++, k++)
		{
			dest[j] = s2[k];
		}
		dest[j + 1] = '\0';

		return (dest);
	}

	return (NULL);
}

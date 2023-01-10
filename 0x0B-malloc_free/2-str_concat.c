#include <stdlib.h>
#include "main.h"

/**
  *_size - finds size of string
  *@str: string pointer
  *
  *Return: size of string
  */

int _size(char *str)
{
	if (str == NULL)
	{
		return (0);
	}
	else
	{
		int i = 0;

		while (str[i] != '\0')
		{
			i++;
		}
		return (i);
	}
}
/**
  *str_concat - concatenates two strings
  *@s1: first str ptr
  *@s2: second str ptr
  *
  *Return: ptr to new concatenated str
  */

char *str_concat(char *s1, char *s2)
{
	int size1 = _size(s1);
	int size2 = _size(s2);
	int size3 = size1 + size2;
	int i = 0;
	int j, k;
	char *dest  = malloc((sizeof(char) * size3) + 1);

	if (dest != NULL)
	{
		for (; i < size1; i++)
			dest[i] = s1[i];

		for (j = (i + 1), k = 0; k < size2; j++, k++)
			dest[j] = s2[k];

		dest[j + 1] = '\0';

		return (dest);
	}

	return (NULL);
}

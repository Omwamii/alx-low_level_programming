#include <stdlib.h>
#include "main.h"

/**
  *_strsize - finds size of string
  *@str: pointer to string
  *
  *Return: size
  */

int _strsize(char *str)
{
	if (str == NULL)
		return (0);

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
  *_strdup - copies str to created memory
  *@str: pointer to string to be copied
  *
  *Return: ptr to duplicate string
  */

char *_strdup(char *str)
{
	if (str == NULL)
		return (NULL);

	else
	{
		int size = _strsize(str);
		int i = 0;
		char *dup = malloc((sizeof(char) * size) + 1);

		if (dup == NULL)
			return (NULL);

		for (; i < size; i++)
		{
			dup[i] = str[i];
		}
		dup[i + 1] = '\0';
		return (dup);
	}

}

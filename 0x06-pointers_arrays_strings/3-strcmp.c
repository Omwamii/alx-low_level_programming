#include "main.h"

/**
  *_strcmp - compares strings
  *@s1: string 1
  *@s2: string 2
  *Return: o if equal, greater than 0 if greater
  *less if less than
  */

int _strcmp(char *s1, char *s2)
{
	int count, comp;

	count = 0;

	while (s1[count] == s2[count] && s1[count] != '\0')
	{
		count++;
	}

	comp = s1[count] - s2[count];

	return (comp);
}

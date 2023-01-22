#include <stdlib.h>
#include "main.h"

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

	char *dest;
	unsigned int i = 0, j = 0, size1 = 0, size2 = 0;

	while (s1 && s1[size1])
		size1++;
	while (s2 && s2[size2])
		size2++;

	if (n < size2)
		dest = malloc(sizeof(char) * (size1 + n + 1));
	else
		dest = malloc(sizeof(char) * (size1 + size2 + 1));

	if (!dest)
		return (NULL);

	while (i < size1)
	{
		dest[i] = dest[i];
		i++;
	}

	while (n < size2 && i < (size1 + n))
		dest[i++] = s2[j++];

	while (n >= size2 && i < (size1 + size2))
		dest[i++] = s2[j++];

	dest[i] = '\0';

	return (dest);
}

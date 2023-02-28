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
	char *dest = NULL;
	unsigned int size1 = 0, size2 = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[size1] != '\0')
		size1++;
	while (s2[size2] != '\0')
		size2++;
	if (size2 > n)
		size2 = n;
	dest = malloc(size1 + size2 + 1);

	if (dest == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		dest[i] = s1[i];
	j = i;

	for (i = 0; i < size2; i++, j++)
		dest[j] = s2[i];
	dest[j] = '\0';

	return (dest);
}

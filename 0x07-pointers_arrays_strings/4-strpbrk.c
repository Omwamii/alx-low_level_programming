#include "main.h"
#define NULL 0

/**
 *_strpbrk - prints string after
 *first occurence of any char
 *@s: pointer to str to be compared
 *@accept: ptr to str with the string
 *
 *Return: ptr to first string occurence
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}

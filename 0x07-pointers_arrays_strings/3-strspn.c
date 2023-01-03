#include "main.h"

/**
 *_strspn - gets lenght of prefix of substring found in another str
 * @s: intial string
 * @accept: sub
 *
 * Return: number of bytes counted
 */

unsigned int _strspn(char *s, char *accept)
{
	int count = 0;
	int len1 = len2 = 0;
	int i, j;

	while (s[len1] != '\0')
	{
		len1++;
	}

	while (accept[len2] != '\0')
	{
		len2++;
	}

	for (i = 0; i < len1; i++)
	{
		for (j = 0; j < len2; j++)
		{
			if (accept[j] == s[i])
			{
				count++;
				break;
			}
		}
	}
	return (count);
}

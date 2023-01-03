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
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				count++;
				break;
			}

			else
			{
				if (count > 0 && accept[j + 1] == '\0')
				{
					return (count);
				}
				else
					continue;
			}
		}

	}
	return (count);
}

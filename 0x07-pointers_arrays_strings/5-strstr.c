#include "main.h"

/**
 * _strstr - finds occurence of substring in another str
 * @haystack: major string
 * @needle: str with substring
 *
 * Return: pointer to first substr character
 */

char *_strstr(char *haystack, char *needle)
{
	int count = 0;

	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			count++;
			needle++;
			haystack++;
		}

		else
		{
			if (*needle != '\0')
			{
				for (; count > 0;)
				{
					needle--;
					count--;
				}
				haystack++;
			}
			else
				return (haystack - count);
		}
	}
	return (NULL);
}

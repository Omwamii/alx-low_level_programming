#include "main.h"
#define NULL 0
/**
 *_strstr - finds occurence of substring in another str
 *@haystack: major string
 *@needle: str with substring
 *
 *Return: pointer to first substr character
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j, x;
	
	if (needle[0] == '\0')
		return (haystack);

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			x = 1, j = 0;

			while (needle[j] != '\0')
			{
				if (haystack[x] == needle[j])
					x++, j++;

				else
					break;
			}
			
			if (needle[j] == '\0')
			{
				return (haystack + i);
			}
		}

		i++;
	}

	return (NULL);
}

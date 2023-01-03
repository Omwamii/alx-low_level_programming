#include "main.h"
#define NULL 0

/**
 *_strchr - finds occurence of char in a string
 *@s: pointer to string
 *@c: character to be scanned
 *
 *Return: pointer to first occurence of char
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
	{
		i++;
	}

	if (s[i] == c)
		return (&s[i]);
	else
		return (NULL);
}

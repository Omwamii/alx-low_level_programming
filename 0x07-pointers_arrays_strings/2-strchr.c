#include "main.h"

/**
 * _strchr - finds occurence of char in a string
 * @s: pointer to string
 * @c: character to be scanned
 *
 * Return: pointer to first occurence of char
 */

char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else
			s++;
	}

	return (NULL);
}

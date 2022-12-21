#include "main.h"

/**
  *string_toupper - coverts to uppercase
  *@s: pointer to string
  *Return: pointer to uppercased string
  */

char *string_toupper(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		if (s[len] >= 97 && s[len] <= 122)
		{
			s[len] = s[len] - 32;
		}
		len++;
	}
	return (s);
}

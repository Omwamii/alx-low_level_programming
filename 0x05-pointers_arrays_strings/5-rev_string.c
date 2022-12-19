#include "main.h"

/**
 * rev_string - reverses string
 * @s: string pointer
 */

void rev_string(char *s)
{
	int len = 0, j, i;
	char tmp;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
	}
}

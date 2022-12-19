#include "main.h"

/**
 * rev_string - reverses string
 * @s: string pointer
 */

void rev_string(char *s)
{
	int len, hlf, i;
	char tmp;

	for (len = 0; s[len] != '\0'; len++)
	{
		i = 0;
		hlf = len / 2;

		while (hlf--)
		{
			tmp = s[len - i - 1];
			s[len - i - 1] = s[i];
			s[i] = tmp;
			i++;
		}
	}
}

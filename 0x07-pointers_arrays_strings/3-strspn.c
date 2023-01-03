#include "main.h"

/**
 *_strspn - gets lenght of prefix of substring
 * @s: intial string
 * @accept: sub
 *
 * Return: number of bytes counted
 */

unsigned int _strspn(char *s, char *accept)
{
	int count = 0;

	while (*s != '\0')
	{
		if (*s == *accept)
		{
			count++;
			s++;
			accept++;
		}

		else
		{
			for (; count != 0;)
			{
				accept--;
				count--;
			}
			s++;
		}
	}

	return (count);
}

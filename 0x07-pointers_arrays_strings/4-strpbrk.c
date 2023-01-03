#include "main.h"

/**
 *_strpbrk - prints string after
 *first occurence of any char
 *@s: pointer to str to be compared
 *@accept: ptr to str with the string
 *
 *Return: ptr to first string occurence
 */

char *_strpbrk(char *s, char *accept)
{
	int scan = 0;

	while (*s != '\0')
	{
		if (*s == *accept)
		{
			return (s);
		}
		else
		{
			if (*accept != '\0')
			{
				scan++;
				accept++;
			}

			else
			{
				for (; scan > 0;)
				{
					accept--;
					scan--;
				}
				s++;
			}
		}
	}

	return (NULL);
}

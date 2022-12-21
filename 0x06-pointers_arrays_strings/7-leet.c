#include "main.h"

/**
  *leet - encodes string into 1337
  *@s: string
  *Return: pointer to str
  */

char *leet(char *s)
{
	int count = 0, i;
	int lower[] = {97, 101, 111, 116, 108};
	int upper[] = {65, 69, 79, 84, 76};
	int nums[] = {52, 51, 48, 55, 49};

	while (*(s + count) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + count) == lower[i] || *(s + count) == upper[i])
			{
				*(s + count) = nums[i];
				break;
			}
		}
		count++;
	}

	return (s);
}

#include "main.h"

/**
  *binary_to_uint - converts a binary num to unsigned int
  *@b: ptr to str of os and 1s chars
  *
  *Return: converted number or 0 if b is null or
  *there are characters which are not 0 or 1
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, k = 1;
	int len = 0;

	if (b == NULL)
		return (0);

	while (b[len + 1] != '\0')
		len++;

	for (; len >= 0; len--)
	{
		if (b[len] == '0')
		{
			k *= 2;
			continue;
		}

		if (b[len] == '1')
		{
			num += k;
			k *= 2;
			continue;
		}

		return (0);

	}

	return (num);
}


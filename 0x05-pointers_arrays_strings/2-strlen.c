#include "main.h"

/**
  *_strlen - returns length of string
  *@s: string param
  *Return: length of str
  */

int _strlen(char *s)
{
	int count = 0;

	while (*(s) != '\0')
	{
		s++;
		count++;
	}

	return (count);
}

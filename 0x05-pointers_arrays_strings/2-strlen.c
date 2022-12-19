#include "main.h"

/**
  *_strlen - returns length of string
  *@s: string param
  *Return: length of str
  */

int _strlen(char *s)
{
	int count;

	while (*(s) != '\0')
	{
		count++;
	}

	return (count);
}

#include "main.h"

/**
  *print_rev - prints reverse of string
  *@s: string 
  */

void print_rev(char *s)
{
	int count = 0;
	int i;

	while (*s != '\0')
	{
		s++;
		count++;
	}

	for (i = 0; i < count; i++)
	{
		_putchar(s);
		s--;
	}
	_putchar('\n');
}

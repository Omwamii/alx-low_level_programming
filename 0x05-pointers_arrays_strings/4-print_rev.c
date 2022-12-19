#include "main.h"

/**
  *print_rev - prints reverse
  *@s: string
  */
void print_rev(char *s)
{
	int count = 0;
	int i;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	for (i = count; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}

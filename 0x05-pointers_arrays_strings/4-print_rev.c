#include "main.h"

/**
  *print_rev - prints reverse
  *@s: string
  */
void print_rev(char *s)
{
	int count = 1;
	int i;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	for (i = (count - 1); i >= 0; i--)
	{
		if (i != 0)
		{
		_putchar(*s);
		s--;
		}
		else 
			_putchar(*s);
	}
	_putchar('\n');
}

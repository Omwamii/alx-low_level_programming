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

	for (i = 0; i < count; i++)
	{
		if (i != (count - 1))
		{	
		_putchar(*s);
		s--;
		}
		else
			_putchar(*s);

	}
	_putchar('\n');
}

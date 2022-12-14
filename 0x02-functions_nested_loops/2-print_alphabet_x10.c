#include<stdio.h>
#include "main.h"

/**
  *print_alphabet_x10 - prints alphabet 10 times
  */
void print_alphabet_x10(void)
{
	int i;
	int g;

	for (g = 0; g < 10; g++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}

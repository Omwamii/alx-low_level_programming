#include<stdio.h>
#include "main.h"

/**
  *print_alphabet - prints alphabet in lowercase
  */
void print_alphabet()
{
	int i;

	for (i = 'a'; i < 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

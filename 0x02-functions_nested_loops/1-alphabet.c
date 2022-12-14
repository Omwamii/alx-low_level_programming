#include<stdio.h>
#include "main.h"

/**
  *main - entry point
  *Return: 0 for success
  */
int main(void)
{
	print_alphabet();
	return (0);
}

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

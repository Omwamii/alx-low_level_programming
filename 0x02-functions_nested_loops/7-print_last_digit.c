#include <stdio.h>
#include "main.h"

/**
  *print_last_digit - prints last digit
  *@i: number param
  *Return: value of digit
  */
int print_last_digit(int i)
{
	int a;

	if (i < 0)
		i = -i;

	a = i % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');
	return (a);
}

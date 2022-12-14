#include<stdio.h>
#include "main.h"

/**
  *print_sign - prints sign of num
  *@n: parameter
  *Return: 1 if pos, 0 if 0 ,-1 if neg
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else
	{
		_putchar('-');
		return (-1);
	}
}


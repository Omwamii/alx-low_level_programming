#include<stdio.h>
#include "main.h"

/**
  *_abs - prints absolute value of num
  *@i: parameter
  */
int _abs(int i)
{
	if (i >  0)
	{
		_putchar(i);
	}

	else if (i < 0)
	{
		i = -(i);
		_putchar(i);
	}

	else 
	{
		_putchar('0');
	}
}

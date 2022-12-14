#include<stdio.h>
#include "main.h"

/**
  *_abs - prints absolute value of num
  *@i: parameter
  *Return: absolute value
  */
int _abs(int i)
{
	if (i > 0)
		return (i);
	else if (i < 0)
		return (-(i));
	else
		return (0);
}

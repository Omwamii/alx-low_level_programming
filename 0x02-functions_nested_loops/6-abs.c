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
		return (i);
	}

	else if (i < 0)
	{
		i = -(i);
		return (i);
	}

	else 
	{
		return (0);
	}
}

#include<stdio.h>
#include "main.h"

/**
  *largest_number - prints largets num of 3
  *@a: first num
  *@b: second num
  *@c: third num
  *Return: largest num
  */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > a && b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}

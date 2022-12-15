#include "main.h"

/**
  *print_triangle - prints triangle
  *@size: size of triangle
  */
void print_triangle(int size)
{
	int j, i;

	for (i = 1; i <= size; i++)
	{
		for (j = i; j < size; j++)
		{
			_putchar(' ');
		}
		for (j = 1; j <= i; j++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
	_putchar('\n');
}

#include "main.h"
#include <stdio.h>

/**
 *print_diagsums - prints sum of diagonals of sq matrix
 *@a: array
 *@size: column size
 */

void print_diagsums(int *a, int size)
{
	int d1 = 0;
	int d2 = 0;
	int i, row;

	for (row = 0; row < size; row++)
	{
		i = (row * size) + row;
		d1 += a[i];
	}

	for (row = 1; row <= size; row++)
	{
		i = (row * size) - row;
		d2 += a[i];
	}

	printf("%d, %d\n", d1, d2);
}

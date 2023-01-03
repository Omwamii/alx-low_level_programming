#include "main.h"
#include <stdio.h>

/**
 *print_diagsums - prints sum of diagonals of sq matrix
 *@a: array
 *@size: column size
 */

void print_diagsums(int *a, int size)
{
	int d1 = d2 = 0;
	int i;

	for (i = 0; i < size; ++i)
	{
		d1 += a[i][i];
		d2 += a[i][size - i - 1];
	}

	printf("%d, ", d1);
	printf("%d", d2);
}

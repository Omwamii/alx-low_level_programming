#include "main.h"
#include <stdio.h>

/**
 * print_array - prints specified num of elements
 * @a: pointer
 * @n: index
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i !+ (n - 1))
			printf(", ";
	}
	printf("\n");
}

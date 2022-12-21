#include "main.h"

/**
  *reverse_array - reverses contents of array
  *@a: pointer to array
  *@n: num of elements in array
  */

void reverse_array(int *a, int n)
{
	int tmp, count;

	n -= 1;
	count = 0;

	while (count <= n)
	{
		tmp = a[count];
		a[count++] = a[n];
		a[n--] = tmp;
	}
}

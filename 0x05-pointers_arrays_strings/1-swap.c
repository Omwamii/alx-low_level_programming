#include "main.h"

/**
  *swap_int - swaps value of two integers
  *@a: first int
  *@b: second int
  */

void swap_int(int *a, int *b)
{
	int tmp, mpt;

	tmp = *a;

	mpt = *b;

	*b = tmp;

	*a = mpt;
}

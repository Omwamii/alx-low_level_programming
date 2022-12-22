#include <stdio.h>

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	/*
	 *write your linr of code here.
	 *remember..
	 * - you are not allowed to use a
	 * - you are not allowed to modify p
	 * - only one statement
	 *you are not allowed to code anything else than this line
	 */
	*(p + 5) = 9;

	printf("a[2] = %d\n", a[2]);
	return (0);
}

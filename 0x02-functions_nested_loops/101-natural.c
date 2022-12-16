#include <stdio.h>

/**
  *main - print natural nos below 1024 thats
  *are multiples of 3 , 5
  *
  *Return: 0
  */
int main(void)
{
	int a, b;

	for (a = 1; a < 1024; a++)
	{
		if ((a % 3) == 0 || (a % 5) == 0)
			b += a;
	}
	printf("%d\n", b);
	return (0);
}

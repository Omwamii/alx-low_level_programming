#include<stdio.h>
#include<time.h>
#include<stdlib.h>

/**
  *main - entry point
  *
  *Return : Always 0 (Success)
  */
int main(void)
{
	int n = rand() - RAND_MAX / 2;
	int lastd = n % 10;

	srand(time(0));


	if (lastd > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n,  lastd);
	else if (lastd < 6 && lastd != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastd);
	else if (lastd == 0)
		printf("Last digit of %d is %d and is 0\n", n, lastd);
	return (0);
}

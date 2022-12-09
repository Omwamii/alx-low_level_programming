#include<stdio.h>
#include<time.h>
#include<stdlib.h>

/**
  *main - entry point
  *
  *Return : value 0
  */
int main(void)
{
	int n = rand() - RAND_MAX / 2;
	int lastdigit = n % 10;

	srand(time(0));


	if (lastdigit > 5 )
		printf("Last digit of %d is %d and is greater than 5\n", n ,  lastdigit);
	else if (lastdigit <6 && lastdigit != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n , lastdigit);
	else if (lastdigit == 0)
		printf("Last digit of %d is %d and is 0\n", n , lastdigit);
	return (0);
}

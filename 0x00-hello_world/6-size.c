#include<stdio.h>

/**
  *main - prints size of types
  *
  *Return - exit status of fn
  */
int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long));
	printf("Size of a long long int: %d bytes(s)", sizeof(long long));
	printf("Size of a float: %d bytes(s)", sizeof(float));
	return (0);
}

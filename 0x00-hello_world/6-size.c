#include<stdio.h>

/**
  *main - prints size of types
  *
  *Return: return 0 for exit
  */
int main(void)
{
	printf("Size of a char: %c byte(s)\n", sizeof(char));
	printf("Size of an int: %i byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long));
	printf("Size of a long long int: %lli bytes(s)\n", sizeof(long long));
	printf("Size of a float: %f bytes(s)\n", sizeof(float));
	return (0);
}

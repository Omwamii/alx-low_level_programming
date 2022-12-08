#include<stdio.h>

/**
  *main - prints size of types
  *
  *Return: return 0 for exit
  */
int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long));
	printf("Size of a long long int: %zu bytes(s)\n", sizeof(long long));
	printf("Size of a float: %zu bytes(s)", sizeof(float));
	return (0);
}

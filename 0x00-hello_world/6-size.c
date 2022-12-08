#include<stdio.h>

/**
  *main - prints size of types
  *
  *Return: return 0 for exit
  */
int main(void)
{
	printf("Size of a char: %zu byte(s)\n", (unsigned long)sizeof(char));
	printf("Size of an int: %zu byte(s)\n", (unsigned long)sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", (unsigned long)sizeof(long));
	printf("Size of a long long int: %zu bytes(s)\n", sizeof(long long));
	printf("Size of a float: %zu bytes(s)\n", (unsigned long)sizeof(float));
	return (0);
}

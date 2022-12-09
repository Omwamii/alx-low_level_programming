#include<stdio.h>
#include<stdlib.h>

/**
  *main - entry point
  *
  *Return: Always 0
  */
int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}

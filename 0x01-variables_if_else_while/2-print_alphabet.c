#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

/**
  *main - entry point
  *
  *Return: value 0 (success)
  */
int main(void)
{        int x;
	for (x = 'A'; x <= 'Z'; x++)
	{
		putchar(tolower(x));
	}
	putchar('\n');
	return (0);
}

#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

/**
  *main - entry point
  *
  *Return: always 0
  */
int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{	
		if (x == 'e' || x == 'q')
			continue;
		putchar(x);
	}
	putchar('\n');
	return (0);
}


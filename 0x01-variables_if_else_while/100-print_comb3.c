#include<stdio.h>
#include<stdlib.h>

/**
  *main - entry point
  *
  *Return: Always zero
  */
int main(void)
{
	int x;
	int y;

	for (x = '0'; x <= '9'; x++)
	{
		for (y = '1'; y <= '9'; y++)
		{
			if (!(x == y || x > y))
			{
				putchar(x);
				putchar(y);

				if (!(x == '8' && y == '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

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
	int count1 = 0;
	int count2 = 0;

	for (x = '0'; x <= '9'; x++)
	{
		count1++;

		for (y = '1'; y <= '9'; y++)
		{
			count2++;

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

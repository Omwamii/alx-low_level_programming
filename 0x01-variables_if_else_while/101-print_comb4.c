#include<stdio.h>

/**
  *main - prints possible three digits
  *Return: Always 0(success)
  */
int main(void)
{
	int x;
	int y;
	int z;

	for (x = '0'; x <= '9'; x++)
	{
		for (y = '0'; y <= '9'; y++)
		{
			for (z = '0'; z <= '9'; z++)
			{
				if (!((z == y) || (y == x) || (y > z) || (x > y)))
				{
					putchar(x);
					putchar(y);
					putchar(z);
					if (!(z == '9' && x == '7' && y == '8'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

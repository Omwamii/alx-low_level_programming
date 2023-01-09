#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  *main - entry point
  *@argc: arg count
  *@argv: pointer to arg string
  *
  *Return: exit value
  */

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		int num = atoi(argv[1]);
		int change = 0;

		if (num < 0)
			printf("0\n");
		else
		{
			while (num)
			{
				change++;

				if ((num - 25) >= 0)
					num -= 25;

				if ((num - 10) >= 0)
					num -= 10;

				if ((num - 5) >= 0)
					num -= 5;

				if ((num - 2) >= 0)
					num -= 2;

				num--;
			}
			printf("%d\n", change);

			return (0);
		}

	}
}

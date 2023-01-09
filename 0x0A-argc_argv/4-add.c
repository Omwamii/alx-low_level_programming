#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
  *main - entry point
  *@argc: arg count
  *@argv: pointer to arg strings
  *
  *Return: success value
  */

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		int add = 0;
		int i;
		int j;

		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (argv[i][j] < '0' || argv[i][j] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			add += atoi(argv[i]);
		}

		printf("%d\n", add);
		return (0);
	}

	else
	{
		printf("0\n");
		return (0);
	}
}

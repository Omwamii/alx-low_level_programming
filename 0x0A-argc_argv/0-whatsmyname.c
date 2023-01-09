#include <stdio.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: pointer to argument strings
 *
 * Return: exit status
 */

int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", *argv);

	return (0);
}

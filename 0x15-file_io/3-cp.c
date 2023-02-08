#include "main.h"

/**
  *main - entry point for the program
  *@argc: num of arguments
  *@argv: array of arguments
  *
  *Return: exit status
  */

int main(int argc, char **argv)
{
	int from, to, rdfrom, wrto;
	char buffer[1024];
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	from = open(argv[1], O_RDONLY);

	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, mode);

	if (to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	while ((rdfrom = read(from, buffer, 1024)) != 0)
	{
		if (rdfrom == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}

		wrto = write(to, buffer, rdfrom);

		if (wrto == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (close(from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from), exit(100);

	if (close(to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to), exit(100);

	return (0);
}

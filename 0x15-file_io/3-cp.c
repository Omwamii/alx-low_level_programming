#include "main.h"

int _strlen(char *str);
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
	char *file_from  = argv[1];
	char *file_to = argv[2];
	char arg_err[] = "Usage: cp file_from file_to\n";
	char read_err[] = "Error: Can't read from file ";
	char wrt_err[] = "Error: Can't write to ";
	char fd_err[] = "Error: Can't close fd ";
	char newline = '\n';
	char buffer[1024];
	char tocl, fromcl;
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{
		write(STDERR_FILENO, arg_err, _strlen(arg_err));
		exit(97);
	}

	from = open(file_from, O_RDONLY);
	to = open(file_to, O_CREAT | O_TRUNC | O_WRONLY, mode);
	rdfrom = read(from, buffer, 1024);
	wrto = write(to, buffer, _strlen(buffer));

	if (from == -1 || rdfrom == -1)
	{
		write(STDERR_FILENO, read_err, _strlen(read_err));
		write(STDERR_FILENO, file_from, _strlen(file_from));
		write(STDERR_FILENO, &newline, 1);
		close(from);
		close(to);
		exit(98);
	}

	if (to == -1 || wrto < 0)
	{
		write(STDERR_FILENO, wrt_err, _strlen(wrt_err));
		write(STDERR_FILENO, file_to, _strlen(file_to));
		write(STDERR_FILENO, &newline, 1);
		close(from);
		close(to);
		exit(99);
	}

	if ((close(from) == 0) && (close(to) == 0))
		return (0);
	else
	{
		fromcl = from + '0';
		tocl = to + '0';
		if (close(from) != 0)
		{
			write(STDERR_FILENO, fd_err, _strlen(fd_err));
			write(STDERR_FILENO, &fromcl, 1);
			write(STDERR_FILENO, &newline, 1);
		}

		if (close(to) != 0)
		{
			write(STDERR_FILENO, fd_err, _strlen(fd_err));
			write(STDERR_FILENO, &tocl, 1);
			write(STDERR_FILENO, &newline, 1);
		}
		exit(100);

	}

}

/**
  *_strlen - find length of string
  *@str: string to be measured
  *
  *Return: str length
  */

int _strlen(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		count++;
	}

	return (count);
}

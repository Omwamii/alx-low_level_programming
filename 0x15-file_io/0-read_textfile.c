#include "main.h"

/**
  *read_textfile - reads a text file and prints
  *to POSIX stdout
  *@filename: string of text
  *@letters: number of letters to read and write
  *
  *Return: 0 if file cant be opened or filename is
  *NULL or write fails/ doesnt write expected bytes
  *else return actual letters printed
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int openf, readf, writef;
	char *buffer;

	if (!filename || !letters)
		return (0);

	openf = open(filename, O_RDONLY);

	if (openf == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	readf = read(openf, buffer, letters);

	if (readf == -1)
		return (0);

	writef = write(STDOUT_FILENO, buffer, readf);

	if (writef < 0)
		return (0);

	close(openf);
	free(buffer);
	return (writef);
}

#include "main.h"

int _strlen(char *str);
/**
  *create_file -fn that creates a file
  *@filename: name of file to create
  *@text_content: null-terminated string to write
  *to created file
  *
  *Return: 1 on success or -1 if ...
  *(i)file cannot be created or written
  *(ii)filename is NULL
  */

int create_file(const char *filename, char *text_content)
{
	int fd, i, writef;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		text_content = "";
	}

	for (i = 0; text_content[i] != 0; i++)
		;

	writef = write(fd, text_content, i);

	if (writef == -1)
	{
		return (-1);
	}

	close(fd);
	return (1);
}

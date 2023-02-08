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
	int fd, writef;
	int len = _strlen(text_content);

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		writef = write(fd, text_content, len);
		if (writef < 0)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}

/**
  *_strlen - finds length of string
  *@str: string to measure
  *
  *Return: length of str
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


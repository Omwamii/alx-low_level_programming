#include "main.h"

int _strlen(char *str);
/**
  *append_text_to_file - appends a text to
  *existing file
  *@filename: existing file path
  *@text_content: content to append to file
  *
  *Return: 1 if success and -1 if..
  *(i)filename is NULL
  *(ii)file does not exist
  *(iii)append failure
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i;

	if (text_content == NULL)
	{
		text_content = "";
	}

	for (i = 0; text_content[i] != 0; i++);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	write(fd, text_content, i);

	close(fd);
	return (1);

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		if (filename != NULL)
		{
			return (1);
		}
		else
		{
			return (-1);
		}
	}
}

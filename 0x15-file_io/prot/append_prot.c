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
	int fd, appendf;
	int len = _strlen(text_content);

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (len != 0)
	{
		appendf = write(fd, text_content, len);

		if (appendf != len)
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
  *@str: string to be measured
  *
  *Return: length
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

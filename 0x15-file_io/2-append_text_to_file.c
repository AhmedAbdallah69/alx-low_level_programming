#include "main.h"
/**
 * _strlen - a function that calcualtes string length.
 * @s: string to be acted upon.
 * Return: Always int.
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
		;
	return (i);
}
/**
 * append_text_to_file - Create a new files
 * @filename: Name of the file
 * @text_content: Content of the file
 * Return: Success is 1, and if failed is -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, flag;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	else
	{
		flag = write(fd, text_content, _strlen(text_content));

		if (flag == -1)
		{
			close(fd);
			return (-1);
		}
		close(fd);
		return (1);
	}
}

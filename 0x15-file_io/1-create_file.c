#include "main.h"
#include <stdio.h>
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
 * create_file - Create a new files
 * @filename: Name of the file
 * @text_content: Content of the file
 * Return: Success is 1, and if failed is -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, flag;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

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

#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: The name of the file to open it
 * @letters: The numbers of bytes to read
 * Return: Number of bytes to read and write to the output
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t bytes_read, bytes_written;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY, 0644);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	bytes_read = read(fd, buffer, letters);

	if (bytes_read == -1)
		return (0);

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	if (bytes_written == -1)
		return (0);

	free(buffer);
	close(fd);
	return (bytes_read);
}

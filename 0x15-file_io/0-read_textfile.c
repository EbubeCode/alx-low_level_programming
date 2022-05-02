#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * @filename: name of the file
 * @letters: number of letter it should read and print
 *
 * Return: number of letters that could be read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, size;
	char *buf;

	if (filename == NULL || letters == 0)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		fd = close(fd);
		return (0);
	}
	size = read(fd, buf, letters);
	if (size == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	close(fd);
	size = write(1, buf, size);

	free(buf);
	return (size);
}

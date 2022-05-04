#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: content of the file
 *
 * Return: 1 on success orelse -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd, size = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	while (text_content[size] != '\0')
		size++;
	if (size > 0)
		size = write(fd, text_content, size);
	close(fd);
	return (size >= 0 ? 1 : -1);
}

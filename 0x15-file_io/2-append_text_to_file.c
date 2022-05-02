#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: text to append
 *
 * Return: 1 on success orelse -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, size = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	while (text_content[size] != '\0')
		size++;
	size = write(fd, text_content, size);
	close(fd);
	return (size >= 0 ? 1 : -1);
}

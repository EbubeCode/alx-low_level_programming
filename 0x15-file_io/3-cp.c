#include "main.h"

/**
 * main - entry point of application
 * @ac: number of argument to application
 * @av: pointer to array of aruments
 *
 * Return: 0 success otherwise 97, 98 98 or 100
 */
int main(int ac, char **av)
{
	int frd, ftd, bytes, cfrd, cftd;
	char buf[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	frd = open(av[1], O_RDONLY);
	if (frd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	ftd = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (ftd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		close(frd);
		exit(99);
	}
	do {
		bytes = read(frd, buf, 1024);
		if (bytes > 0)
			write(ftd, buf, bytes);
	} while (bytes == 1024);
	cfrd = close(frd);
	cftd = close(ftd);
	if (cfrd == -1 || cftd == -1)
	{
		if (cfrd == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", frd);
		if (cftd == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ftd);
		exit(100);
	}
	return (0);
}

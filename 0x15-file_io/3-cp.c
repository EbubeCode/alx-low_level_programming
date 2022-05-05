#include "main.h"

/**
 * read_write - reads and writes to file
 * @frd: file to read from
 * @ftd: file to write to
 * @av: command line arguments
 *
 * Return: 0 success -1 otherwise
 */
int read_write(int frd, int ftd, char **av)
{
	int bytes;
	char buf[1024];

	do {
		bytes = read(frd, buf, 1024);
		if (bytes < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			close(frd);
			close(ftd);
			exit(98);
		}
		bytes = write(ftd, buf, bytes);
		if (bytes < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			close(frd);
			close(ftd);
			exit(99);
		}
	} while (bytes == 1024);
	return (0);
}

/**
 * main - entry point of application
 * @ac: number of argument to application
 * @av: pointer to array of aruments
 *
 * Return: 0 success otherwise 97, 98 98 or 100
 */
int main(int ac, char **av)
{
	int frd, ftd, cfrd, cftd;

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
	read_write(frd, ftd, av);
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

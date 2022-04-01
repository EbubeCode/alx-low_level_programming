#include <stdio.h>

/**
 * main - prints the name of the program followed by a
 * new line
 * @argc: number of arguments
 * @argv: command line argument vectors
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
		printf("%s\n", argv[--argc]);
	else
		printf("%s\n", argv[0]);
	return (0);
}

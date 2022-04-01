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
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}

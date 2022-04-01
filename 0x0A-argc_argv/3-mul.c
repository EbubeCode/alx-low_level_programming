#include <stdio.h>
#include <stdlib.h>

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
	if (argc < 3)
		printf("Error\n");
	else
		printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	return (0);
}

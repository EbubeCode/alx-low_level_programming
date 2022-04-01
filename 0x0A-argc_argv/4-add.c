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
	int i, n, sum = 0;

	if (argc == 1)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			n = atoi(argv[i]);
			if (n <= 0)
			{
				printf("Error\n");
				return (1);
			}
			sum += n;
		}

		printf("%d\n", sum);
	}
	return (0);
}

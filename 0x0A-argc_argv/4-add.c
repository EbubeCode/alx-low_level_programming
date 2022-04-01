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
	int i, sum = 0;

	if (argc == 1)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			char *a = argv[i];

			for (; *a != '\0'; a++)
			{
				if (*a < '0' || *a > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}

		printf("%d\n", sum);
	}
	return (0);
}

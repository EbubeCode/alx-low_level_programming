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
	int mod = 0, div = 0, n;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	if (n < 0)
		printf("0\n");
	else
	{
		div = n / 25;
		mod = n % 25;
		div += mod / 10;
		mod = mod % 10;
		div += mod / 5;
		mod = mod % 5;
		div += mod / 2;
		mod = mod % 2;
		div += mod;
		printf("%d\n", div);
	}
	return (0);
}

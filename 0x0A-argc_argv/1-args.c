#include <stdio.h>

/**
 * main - prints the name of the program followed by a
 * new line
 * @argc: number of arguments
 * @argv: command line argument vectors
 *
 * Return: Always 0 (success)
 */
int main(int argc, char __attribute__ ((unused)) *argv[])
{
	printf("%d\n", --argc);
	return (0);
}

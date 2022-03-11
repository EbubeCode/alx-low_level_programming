#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	i = 97;
	while (i <= 122)
	{
		if (i != 113 && i != 101)
			putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}

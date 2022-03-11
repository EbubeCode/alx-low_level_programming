#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	i = 48;
	while (i <= 57)
	{
		if (i == 57)
			putchar(i);
		else
		{
			putchar(i);
			putchar(44);
			putchar(32);
		}
		i++;
	}
	putchar('\n');
	return (0);
}

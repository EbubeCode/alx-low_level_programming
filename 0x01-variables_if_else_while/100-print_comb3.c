#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	i = 48;
	while (i <= 56)
	{
		j = i + 1;
		while (j <= 57)
		{
			putchar(i);
			putchar(j);
			if (i == 56 && j == 57)
				j++;
			else
			{
				putchar(44);
				putchar(32);
				j++;
			}
		}
		i++;
	}
	putchar('\n');
	return (0);
}

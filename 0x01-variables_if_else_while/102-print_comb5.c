#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	int k;
	int l;

	i = 48;
	while (i <= 57)
	{
		j = 48;
		while (j <= 57)
		{
			k = 48;
			while (k <= 57)
			{
				if (k == 48)
					l = 49;
				else
					l = 48;
				while (l <= 57)
				{
					putchar(i);
					putchar(j);
					putchar(32);
					putchar(k);
					putchar(l);
					if (i == 57 && j == 56 && k == 57 && l == 57)
					{
						putchar('\n');
						exit(0);
					}
					else
					{
						putchar(44);
						putchar(32);
						l++;
					}
				}
				k++;
			}
			j++;
		}
		i++;
	}
	return (0);
}

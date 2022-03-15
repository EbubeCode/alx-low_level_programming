#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return: void
 */
void jack_bauer(void)
{
	int i;
	int j;
	int k;
	int l;

	i = 48;
	while (i <= 50)
	{
		j = 48;
		while (j <= 57)
		{
			k = 48;
			while (k <= 53)
			{
				l = 48;
				while (l <= 57)
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(l);
					_putchar('\n');
					if (i == 50 && j == 51 && k == 53 && l == 57)
						return;
					l++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
}

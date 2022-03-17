#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: numbe of time to print \
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i;
	int j;

	i = 1;
	if (n < i)
		_putchar('\n');
	else
	{
		while (i++ <= n)
		{
			j = 1;
			while (j++ < i - 1)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}

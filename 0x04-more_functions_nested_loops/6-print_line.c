#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times to the line
 *
 * Return: void
 */
void print_line(int n)
{
	int i;

	i = 1;
	if (n < i)
		_putchar('\n');
	else
	{
		while (i++ <= n)
			_putchar('_');
		_putchar('\n');
	}
}

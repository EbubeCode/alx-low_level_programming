#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 * @size: is the size of the square
 *
 * Return: void
 */
void print_square(int size)
{
	int i;
	int j;

	i = 1;
	if (size < i)
		_putchar('\n');
	else
	{
		while (i++ <= size)
		{
			j = 1;
			while (j++ <= size)
				_putchar('#');
			_putchar('\n');
		}
	}
}

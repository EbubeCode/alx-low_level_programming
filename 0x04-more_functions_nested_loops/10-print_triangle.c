#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: the base of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k;
	int l;

	i = 1;
	if (size < i)
		_putchar('\n');
	else
	{
		j = size - 1;
		while (i++ <= size)
		{
			k = 1;
			while (k++ <= j)
				_putchar(' ');
			l = 1;
			while (l++ < i)
				_putchar('#');
			j--;
			_putchar('\n');
		}
	}
}

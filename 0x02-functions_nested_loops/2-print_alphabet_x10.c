#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabet followed
 * by a new line ten times
 *
 * Return: Always void
 */
void print_alphabet_x10(void)
{
	char i;
	int j;

	j = 1;
	while (j <= 10)
	{
		i = 97;
		while (i <= 122)
		{
			_putchar(i++);
		}
		_putchar('\n');
		j++;
	}
}

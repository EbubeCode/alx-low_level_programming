#include "main.h"

/**
 * print_alphabet - prints lowercase alphabet followed by a new line
 *
 * Return: Always void
 */
void print_alphabet()
{
	char i;

	i = 48;
	while (i <= 122)
	{
		_putchar(i);
	}
	_putchar('\n');
	return;
}

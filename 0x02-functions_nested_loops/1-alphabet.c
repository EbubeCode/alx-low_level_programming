#include "main.h"

/**
 * print_alphabet - prints lowercase alphabet followed by a new line
 *
 * Return: Always void
 */
void print_alphabet(void)
{
	char i;

	i = 97;
	while (i <= 122)
	{
		_putchar(i++);
	}
	_putchar('\n');
}

#include "main.h"

/**
 * print_rev - prints the string s in reverse to stdout
 * @s: string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	for (; *s != '\0'; ++s)
		i++;
	for (; i >= 0; --i)
	{
		--s;
		_putchar(*s);
	}
	_putchar('\n');
}

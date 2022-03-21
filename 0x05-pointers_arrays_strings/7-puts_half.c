#include "main.h"

/**
 * puts_half - prints the other half of a string
 * @str: string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	char *a;
	int x;

	i = 0;
	a = str;
	for (; *str != '\0'; ++str)
		i++;
	x = i / 2;
	if (i % 2 != 0)
		x += 1;

	for (; x < i; x++)
	{
		_putchar(a[x]);
	}
	_putchar('\n');
}

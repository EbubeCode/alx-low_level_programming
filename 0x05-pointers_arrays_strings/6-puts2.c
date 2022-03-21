#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with the first
 * @str: the string
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;

	i = 0;
	for (; *str != '\0'; ++str)
	{
		if (i % 2 == 0)
			_putchar(*str);
		i++;
	}
	_putchar('\n');
}

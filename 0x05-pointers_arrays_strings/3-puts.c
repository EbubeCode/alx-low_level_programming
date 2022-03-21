#include "main.h"

/**
 * _puts - prints the string str to stdout
 * @str: string
 *
 * Return: void
 */
void _puts(char *str)
{

	for (; *str != '\0'; ++str)
		_putchar(*str);

	_putchar('\n');
}

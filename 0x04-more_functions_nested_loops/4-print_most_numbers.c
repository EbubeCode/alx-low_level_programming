#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int i;

	i = 48;
	while (i <= 57)
	{
		if (i == 52 || i == 50)
			i++;
		else
			_putchar(i++);
	}
	_putchar('\n');
}

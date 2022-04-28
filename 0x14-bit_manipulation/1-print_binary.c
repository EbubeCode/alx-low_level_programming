#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int b = 0x8000000000000000;
	unsigned long int a = n & b;
	int i = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (a != b)
	{
		n = n << 1;
		a = n & b;
		i++;
	}
	i = 64 - i;
	while (i > 0)
	{
		a = n & b;
		if (a == 0)
			_putchar('0');
		else
			_putchar('1');
		n = n << 1;
		i--;
	}
}

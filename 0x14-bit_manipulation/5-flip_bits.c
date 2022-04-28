#include "main.h"

/**
 * flip_bits - counts the number of bits needee to be flipped
 * in a number to form another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 0, j = 0;
	unsigned long int x, y;

	if (n == m)
		return (0);

	while (j < 64)
	{
		x = n & 1;
		y = m & 1;
		if (x != y)
			i++;
		n = n >> 1;
		m = m >> 1;
		j++;
	}
	return (i);
}

#include "main.h"

/**
 * get_bit - finds the value of a bit at a given index
 * @n: number to find the bit
 * @index: index of the bit
 *
 * Return: the value of the bit at index or else -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int i, j;

	if (index > 63)
		return (-1);
	i = 1 << index;
	j = n & i;
	return (j == 0 ? 0 : 1);
}

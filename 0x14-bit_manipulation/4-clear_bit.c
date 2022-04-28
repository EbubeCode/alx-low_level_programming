#include "main.h"

/**
 * clear_bit - clears the value of a bit at a given index
 * @n: number to find the bit
 * @index: index of the bit
 *
 * Return: the value of the bit at index or else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > 63 || n == NULL)
		return (-1);
	i = ~(1 << index);
	*n = *n & i;
	return (1);
}

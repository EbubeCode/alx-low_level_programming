#include "main.h"

/**
 * set_bit - sets the value of a bit at a given index
 * @n: number to find the bit
 * @index: index of the bit
 *
 * Return: the value of the bit at index or else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int i;

	if (index > 63 || n == NULL)
		return (-1);
	i = 1 << index;
	*n = *n | i;
	return (1);
}

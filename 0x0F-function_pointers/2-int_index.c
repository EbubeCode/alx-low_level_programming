#include <stddef.h>

/**
 * int_index - searches an array for an integer
 * @array: array to be searched
 * @size: number of elemnts in the array
 * @cmp: pointer to the compare function
 *
 * Return: index of the found element or -1 otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(array[i]) != 0)
			return (i);
	return (-1);
}

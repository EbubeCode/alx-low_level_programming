#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * @array: the array
 * @size: size of the array
 * @value: value to find
 *
 * Return: index of value or else -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu} = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}

	return (-1);
}

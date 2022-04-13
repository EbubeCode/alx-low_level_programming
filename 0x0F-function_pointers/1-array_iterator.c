#include <stddef.h>

/**
 * array_iterator - executes the function action on each element
 * of array
 * @array: the array
 * @size: size of the array
 * @action: function to execute
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL || array == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes
 * it with a specific char
 * @size: size of the array
 * @c: char to fill the array
 *
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(sizeof(*arr) * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}

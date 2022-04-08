#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimun value
 * @max: maximum value
 *
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int i, j;
	int *a;

	if (min > max)
		return (NULL);
	a = malloc(sizeof(*a) * (max + 1 - min));
	if (a == NULL)
		return (NULL);
	j = min;
	for (i = 0; i <= (max - min); i++)
		a[i] = j++;
	return (a);
}

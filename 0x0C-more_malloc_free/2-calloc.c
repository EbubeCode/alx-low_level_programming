#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: number of bytes for each element
 *
 * Return: pointter to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(size * nmemb);
	for (i = 0; i < (nmemb * size); i++)
		a[i] = 0;
	return (a);
}

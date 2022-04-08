#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to memory block
 * @old_size: size in bytes of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 *
 * Return: pointer to the new allocated memory orelse null
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *a, *b;
	unsigned int i;

	if (new_size == old_size && ptr != NULL)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	a = malloc(sizeof(*a) * new_size);
	if (a == NULL)
	{
		if (ptr != NULL)
		{
			free(ptr);
			return (NULL);
		}
		else
		return (NULL);
	}
	if (ptr != NULL)
	{
		b = (char *)ptr;
		for (i = 0; i < new_size && i < old_size; i++)
			a[i] = b[i];
		free(ptr);
	}
	return (a);
}

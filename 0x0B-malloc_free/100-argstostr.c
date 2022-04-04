#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of an application
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: pointer to the new string
 */
char *argstostr(int ac, char **av)
{
	int i, j, size;
	char *a, *b;

	if (ac < 1 || av == NULL)
		return (NULL);
	size = 0;
	for (i = 0; i < ac; i++)
	{
		a = av[i];
		for (; *a != '\0'; a++)
			size++;
		size++;
	}
	size++;
	a = malloc(sizeof(char) * size);
	if (a == NULL)
		return (NULL);
	j = 0;
	for (i = 0; i < ac; i++)
	{
		b = av[i];
		for (; *b != '\0'; b++)
			a[j++] = *b;
		a[j++] = '\n';
	}
	a[j] = '\0';
	return (a);
}

#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to copy from s2
 *
 * Return: pointer to the newly created string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0;
	char *a;

	if (s1 == NULL && s2 == NULL)
	{
		a = malloc(1);
		*a = '\0';
		return (a);
	}
	if (s2 != NULL)
		for (a = s2; i < n && *a != '\0'; a++)
			i++;
	if (s1 != NULL)
		for (a = s1; *a != '\0'; a++)
			i++;
	i++;
	a = malloc(sizeof(*a) * i);
	if (a == NULL)
		return (NULL);
	if (s1 != NULL)
		for (; *s1 != '\0'; s1++)
			a[j++] = *s1;
	if (s2 != NULL)
		for (; n > 0 && *s2 != '\0'; s2++)
		{
			a[j++] = *s2;
			n--;
		}
	for (; j < i; j++)
		a[j] = '\0';
	return (a);
}

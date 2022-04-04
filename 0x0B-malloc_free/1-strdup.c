#include <stdlib.h>

/**
 * _strdup - copy the string str to another allocated memory
 * @str: the string to copy
 *
 * Return: the pointer to a newly allocated space in memory
 */
char *_strdup(char *str)
{
	int i, j;
	char *s;

	if (str == NULL)
		return (NULL);
	s = str;
	for (i = 1; *s != '\0'; i++)
		s++;
	s = malloc(sizeof(*str) * (i++));
	if (s == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
		s[j] = str[j];
	return (s);
}

#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer that points to a newly allocated space in memory
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i = 0, j = 0;

	if (s1 == NULL && s2 == NULL)
	{
		s = malloc(1);
		*s = '\0';
		return (s);
	}
	s = s1;
	if (s != NULL)
		for (; *s != '\0'; s++)
			i++;
	s = s2;
	if (s != NULL)
		for (; *s != '\0'; s++)
			i++;
	s = malloc(sizeof(*s1) * (++i));
	if (s == NULL)
		return (NULL);
	if (s1 != NULL)
		for (; *s1 != '\0'; s1++)
		{
			s[j] = *s1;
			j++;
		}
	if (s2 != NULL)
		for (; *s2 != '\0'; s2++)
		{
			s[j] = *s2;
			j++;
		}
	s[j] = '\0';
	return (s);
}

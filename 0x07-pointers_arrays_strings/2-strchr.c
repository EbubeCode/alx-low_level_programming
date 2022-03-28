#include <stddef.h>

/**
 * _strchr - locates a character c in the string s
 * @c: character to locate
 * @s: string to search
 *
 * Return: pointer to the first occurence of the character c
 */
char *_strchr(char *s, char c)
{
	for (; *s != '\0';  s++)
	{
		if (*s == c)
			return (s);
	}
	if (*s == c)
		return (s);
	return (NULL);
}

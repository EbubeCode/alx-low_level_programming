#include <stddef.h>

/**
 * _strpbrk - searches the string s for any of a set of bytes in accept
 * @s: base string
 * @accept: set of bytes
 *
 * Return: the pointer to the byte in s that
 * matches one in accept or NULL in not
 */
char *_strpbrk(char *s, char *accept)
{
	char *a;

	for (; *s != '\0'; s++)
	{
		a = accept;
		for (; *a != '\0'; a++)
		{
			if (*a == *s)
				return (s);
		}
	}
	return (NULL);
}

#include <stddef.h>
#include <stdio.h>

/**
 * _strstr -  finds the first occurence of the substring needle
 * in the string haystack
 * @haystack: base string
 * @needle: substring
 *
 * Return: pointer to the beginning of the located substring, or
 * NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *n;
	char *h;

	for (; *haystack != '\0'; haystack++)
	{
		if (*needle == *haystack)
		{
			n = needle;
			h = haystack;
			for (; *n != '\0'; n++)
			{
				if (*n != *h)
					break;
				h++;
			}
			if (*n == '\0')
				return (haystack);
		}
	}
	return (NULL);
}

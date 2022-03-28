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
	int i;
	int j;

	n = needle;
	h = haystack;
	j = 0;
	for (i = 0; i >= 0 && haystack[i] != '\0'; i++)
	{
		if (*n == haystack[i] && j > 0)
		{
			j++;
			n++;
		}
		else if (*needle == haystack[i])
		{
			j = 1;
			n = needle;
			n++;
		}
		else
			h++;
	}
	if (j > 0)
		return (h);
	return (NULL);
}

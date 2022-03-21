#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: string
 *
 * Return: lenght of string s
 */
int _strlen(char *s)
{

	int i;

	i = 0;
	for (; *s != '\0'; ++s)
		i++;

	return (i);
}

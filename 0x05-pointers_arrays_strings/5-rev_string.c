#include <stdio.h>
#include <string.h>

/**
 * rev_string - reverses the string s
 * @s: string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i;
	char *a;
	int x;
	char temp;

	i = 0;
	a = s;
	for (; *s != '\0'; ++s)
		i++;
	for (x = 0; x < i / 2; x++)
	{
		--s;
		temp = *s;
		*s = a[x];
		a[x] = temp;
	}
}

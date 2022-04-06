#include <stdlib.h>
#include <stdio.h>

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: an array of strings
 */
char **strtow(char *str)
{
	char **arr, *a = str;
	int i = 1, stat = 0, n, j = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (; *a != '\0'; a++)
		if (*a != ' ' && stat == 0)
		{
			stat = 1;
			i++;
		}
		else if (*a == ' ')
			stat = 0;
	arr = (char **)malloc(sizeof(char *) * i);
	if (arr == NULL || i == 1)
		return (NULL);
	for (a = str; *a != '\0'; a++)
		if (*a != ' ')
		{
			for (n = 1; *a != ' ' && *a != '\0'; a++)
				n++;
			arr[j] = (char *)malloc(sizeof(char) * n);
			if (arr[j++] == NULL)
				return (NULL);
			if (*a == '\0')
				break;
		}
	i = 0;
	for (a = str; *a != '\0'; a++)
		if (*a != ' ')
		{
			for (j = 0; *a != ' ' && *a != '\0'; a++)
				arr[i][j++] = *a;
			arr[i][j] = '\0';
			i++;
			if (*a == '\0')
				break;
		}
	arr[i] = NULL;
	return (arr);
}

/**
 * _strcmp - compares two strings s1 and s2
 * @s1: first string
 * @s2: second string
 *
 * Return: s1 < s2 (-1), s1 == s2 (0), s1 > s2 (1)
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	if (s1[i] != s2[i])
		return (s1[i] - s2[i]);
	return (0);
}

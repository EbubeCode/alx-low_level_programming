/**
 * _strspn - gets the length of a prefix substring
 * @s: base string
 * @accept: prefix string
 *
 * Return: the number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int n;
	char *a;
	int i;

	n = 0;
	for (i = 0; i >= 0 && s[i] != '\0'; i++)
	{
		a = accept;
		for (; *a != '\0'; a++)
		{
			if (*a == s[i])
				n++;
		}
		if (*a == s[i])
			n++;
		if (i > n)
			break;
	}
	return (n);
}

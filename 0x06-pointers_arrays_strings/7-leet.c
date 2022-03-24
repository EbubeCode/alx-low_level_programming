/**
 * leet - encodes a string into leet
 * @s: string to encode
 *
 * Return: pointer to the string s
 */
char *leet(char *s)
{
	char *a;
	int i;
	char keys[] = {'A', 'a', 'E', 'e', 'O', 'o', 'T', 't', 'L', 'l'};
	char values[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	a = s;
	for (; *a != '\0'; a++)
	{
		for (i = 0; i < 10; i++)
		{
			if (*a == keys[i])
				*a = values[i];
		}
	}
	return (s);
}


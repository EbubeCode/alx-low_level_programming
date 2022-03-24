/**
 * rot13 - encodes a string using rot13
 * @s: string to encode
 *
 * Return: pointer to the string s
 */
char *rot13(char *s)
{
	char *a;
	int i;
	char keys[] = {'A', 'a', 'B', 'b', 'C', 'c', 'D', 'd', 'E', 'e', 'F', 'f',
		'G', 'g', 'H', 'h', 'I', 'i', 'J', 'j', 'K', 'k', 'L', 'l', 'M',
		'm', 'N', 'n', 'O', 'o', 'P', 'p', 'Q', 'q', 'R', 'r', 'S', 's',
		'T', 't', 'U', 'u', 'V', 'v', 'W', 'w', 'X', 'x', 'Y', 'y', 'Z',
		'z'};
	char values[] = {'N', 'n', 'O', 'o', 'P', 'p', 'Q', 'q', 'R', 'r', 'S',
		's','T', 't', 'U', 'u', 'V', 'v', 'W', 'w', 'X', 'x', 'Y', 'y',
		'Z','z', 'A', 'a', 'B', 'b', 'C', 'c', 'D', 'd', 'E', 'e', 'F',
		'f','G', 'g', 'H', 'h', 'I', 'i', 'J', 'j', 'K', 'k', 'L', 'l',
		'M', 'm'};

	a = s;
	for (; *a != '\0'; a++)
	{
		for (i = 0; i < 52; i++)
		{
			if (*a == keys[i])
			{
				*a = values[i];
				break;
			}
		}
	}
	return (s);
}


/**
 * cap_string - capitalizes all words of a string
 * @s: string to capitalize
 *
 * Return: pointer to the string
 */
char *cap_string(char *s)
{
	char *a;
	int bs;

	a = s;
	bs = 1;
	for (; *a != '\0'; a++)
	{
		if (*a == ' ' || *a == '\t' || *a == '\n' || *a == ',' || *a == ';'
			 || *a == '.' || *a == '!' || *a == '?' || *a == '"' ||
			 *a == '(' || *a == ')' || *a == '{' || *a == '}')
			bs = 1;
		else if (bs == 1)
		{
			if (*a >= 97 && *a <= 122)
				*a -= 32;
			bs = 0;
		}
	}
	return (s);
}


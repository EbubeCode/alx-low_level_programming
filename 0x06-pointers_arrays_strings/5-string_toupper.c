/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: string to work on
 *
 * Return: pointer to the string s
 */
char *string_toupper(char *s)
{
	char *a;

	a = s;
	for (; *a != '\0'; a++)
	{
		if (*a >= 97 && *a <= 122)
			*a -= 32;
	}
	return (s);
}

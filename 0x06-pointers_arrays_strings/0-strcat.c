/**
 * _strcat - concatenates two strings dest and src
 * @dest: resultant string
 * @src: source string
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char *a;

	a = dest;
	for (; *dest != '\0'; dest++)
		;
	for (; *src != '\0'; src++)
	{
		*dest = *src;
		dest++;
	}
	*dest = *src;
	return (a);
}

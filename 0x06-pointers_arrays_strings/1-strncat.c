/**
 * _strncat - concatenates two strings dest and src
 * @dest: resultant string
 * @src: source string
 * @n: number of bytes to copy from src
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *a;
	int i;

	a = dest;
	for (; *dest != '\0'; dest++)
		;
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		*dest = src[i];
		dest++;
	}
	if (n > 0)
		*dest = '\0';
	return (a);
}

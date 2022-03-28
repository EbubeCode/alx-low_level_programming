/**
 * _memset - fills the memory of array s with the constant byte b
 * @s: string to be filled
 * @b: character to be used
 * @n: number of bytes to write
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

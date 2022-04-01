/**
 * _strncpy - copies the string src to dest
 * @dest: destination string
 * @src: source string
 * @n: number fo bytes to copy
 *
 * Return: the pointer that points to string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

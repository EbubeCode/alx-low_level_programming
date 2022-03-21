/**
 * _strcpy - copies the string src to the buffer pointed to by dest
 * @src: string to copy
 * @dest: destination of copy
 *
 * Return: the point to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	for (; *src != '\0'; ++src)
	{
		dest[i] = *src;
		i++;
	}
	dest[i] = *src;
	return (dest);
}

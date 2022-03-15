/**
 * _isalpha - checks if character c is an alphabet
 * @c: The character to check if it is an alphabet
 *
 * Return: 1 if c is an alphabet or 0 if not
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

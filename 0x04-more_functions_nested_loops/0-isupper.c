/**
 * _isupper - checks if c is upper case
 * @c: integer to check if it is upper
 *
 * Return: 1 if c uppercase else 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}

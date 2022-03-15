/**
 * _islower - checks for lowercase character c
 * @c: The character to check if it is lowercase
 *
 * Return: 1 if c is lowercase or 0 if not
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

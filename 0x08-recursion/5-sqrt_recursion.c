/**
 * get_sqrt - gets the square root of number n
 * @n: number
 * @y: odd number
 *
 * Return: the square root of n
 */
int get_sqrt(int n, int y)
{
	int i;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	i = get_sqrt((n - y), (y + 2));
	if (i < 0)
		return (i);
	return (1 + i);
}

/**
 * _sqrt_recursion - calculates the square root of n
 * @n: integer
 *
 * Return: the square root of n or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{

	return (get_sqrt(n, 1));
}

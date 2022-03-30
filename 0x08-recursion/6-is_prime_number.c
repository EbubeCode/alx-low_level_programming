/**
 * get_prime - check if x is prime
 * @x: the number
 * @y: the divisor
 *
 * Return: 1 if n is prime else 0
 */
int get_prime(int x, int y)
{
	if ((x / 2) <= y)
		return (1);
	if (x % y == 0)
		return (0);
	return (get_prime(x, (y + 1)));
}

/**
 * is_prime_number - checks if n is prime
 * @n: the integer
 *
 * Return: 1 if n is prime else 0
 */
int is_prime_number(int n)
{
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (get_prime(n, 2));
}

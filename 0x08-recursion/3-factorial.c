/**
 * factorial - returns the factorial of a given number n
 * @n: the integer
 *
 * Return: the factorial of integer >= 0 or else -1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}

/**
 * _abs - computes the absolute value of an integer n
 * @n: the number to get its absolute value
 *
 * Return: the absolute value of n
 */
int _abs(int n)
{
	if (n < 0)
		n = 0 - n;
	return (n);
}

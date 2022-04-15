#include <stdarg.h>
/**
 * sum_them_all - sums all the parameters provided
 * @n: the first named parameter
 *
 * Return: the sum of all the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (sum);
	va_start(list, n);
	for (i = 0; i < n; i++)
		sum += va_arg(list, int);
	va_end(list);
	return (sum);
}

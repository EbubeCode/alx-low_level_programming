#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int sum;
	long int fib1;
	long int fib2;
	long int fib;

	sum = 0;
	fib1 = 1;
	fib2 = 0;
	fib = fib1 + fib2;
	while (fib < 4000000)
	{
		if (fib % 2 == 0)
			sum += fib;
		fib2 = fib1;
		fib1 = fib;
		fib = fib1 + fib2;
	}
	printf("%li\n", sum);
	return (0);
}

#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	long int fib1;
	long int fib2;
	long int fib;

	i = 1;
	fib = 0;
	fib1 = 1;
	fib2 = 0;
	while (i <= 50)
	{
		fib = fib1 + fib2;
		if (i == 50)
			printf("%li\n", fib);
		else
			printf("%li, ", fib);
		fib2 = fib1;
		fib1 = fib;
		i++;
	}
	return (0);
}

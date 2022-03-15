#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long int fib1;
	unsigned long int fib2;
	unsigned long int fib;

	i = 1;
	fib = 0;
	fib1 = 1;
	fib2 = 0;
	while (i <= 98)
	{
		fib = fib1 + fib2;
		if (i == 98)
			printf("%lu\n", fib);
		else
			printf("%lu, ", fib);
		fib2 = fib1;
		fib1 = fib;
		i++;
	}
	return (0);
}

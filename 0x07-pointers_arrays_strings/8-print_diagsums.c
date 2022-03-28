#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a matrix
 * @a: matrix
 * @size: size of matrix
 *
 * Return void
 */
void print_diagsums(int *a, int size)
{
	int sum1;
	int sum2;
	int i;
	int j;

	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < size; i++)
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum1 += *a;
			if ((i + j) == (size - 1))
				sum2 += *a;
			a++;
		}
	printf("%d, %d\n", sum1, sum2);
}

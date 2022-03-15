#include <stdio.h>

/**
 * print_to_98 - it prints numbers from n to 98 in order
 * @n: this is the number that the printing should start from
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			if (n == 98)
				printf("%d\n", n++);
			else
				printf("%d, ", n++);
		}
	}
	else
	{
		while (n >= 98)
		{
			if (n == 98)
				printf("%d\n", n--);
			else
				printf("%d, ", n--);
		}
	}
}

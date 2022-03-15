#include "main.h"

/**
 * switch_print - use switch block to print a number
 * @n: number to be printed
 *
 * Return: void
 */
void switch_print(int n)
{

	switch (n)
	{
	case 0:
		_putchar('0');
		break;
	case 1:
		_putchar('1');
		break;
	case 2:
		_putchar('2');
		break;
	case 3:
		_putchar('3');
		break;
	case 4:
		_putchar('4');
		break;
	case 5:
		_putchar('5');
		break;
	case 6:
		_putchar('6');
		break;
	case 7:
		_putchar('7');
		break;
	case 8:
		_putchar('8');
		break;
	default:
		_putchar('9');
	}
}

/**
 * seperate_print - seperates the mutiple b4 printing
 * @n: number to seperate
 * @x: to monitor printing
 * @a: to monitor spacing
 *
 * Return: void
 */
void seperate_print(int n, int x, int a)
{
	int i;
	int j;
	int k;


	k = n / 100;
	j = (n % 100) / 10;
	i = (n % 100) % 10;
	if (k > 0)
		switch_print(k);
	else if (a == 1)
		_putchar(' ');
	if (j > 0)
		switch_print(j);
	else if (k > 0)
		switch_print(j);
	else if (a == 1)
		_putchar(' ');
	switch_print(i);
	if (x == 1)
	{
		_putchar(',');
		_putchar(' ');
	}


}

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: is the number for the times table
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i;
	int j;
	int k;

	if (n < 0 || n > 15)
		return;

	i = 0;
	while (i <= n)
	{
		j = 0;
		while (j <= n)
		{
			k = i * j;
			if (j == n)
				if (j == 0)
					seperate_print(k, 0, 0);
				else
					seperate_print(k, 0, 1);
			else if (j > 0)
				seperate_print(k, 1, 1);
			else
				seperate_print(k, 1, 0);
			j++;
		}
		_putchar('\n');
		i++;
	}
}

#include "main.h"

/**
 * print_last_digit - prints the last digit of a number n
 * @n: number to print it's last digit
 *
 * Return: returns the value of the last digit of n
 */
int print_last_digit(int n)
{
	int x;
	int abs;

	x = n % 10;
	abs = _abs(x);
	switch (abs) {
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
	return (x);
}

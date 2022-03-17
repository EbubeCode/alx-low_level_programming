#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14 ten times followed by a new line
 *
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int a;
	int b;

	a = 0;
	while (a < 10)
	{
		i = 48;
		b = 0;
		while (b <= 14)
		{
			if (b > 9)
				_putchar('1');
			_putchar(i++);
			if (b == 9)
				i = 48;
			b++;
		}
		_putchar('\n');
		a++;
	}
}

#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_strings - prints strings provided
 * @separator: seperator between numbers
 * @n: the number of variable parameters
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *a;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		a = va_arg(list, char *);
		if (i == (n - 1) || separator == NULL)
			printf("%s", a == NULL ? "(nil)" : a);
		else
			printf("%s%s", a == NULL ? "(nil)" : a, separator);
	}
	va_end(list);
	printf("\n");
}

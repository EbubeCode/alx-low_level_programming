#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_numbers - prints numbers provided
 * @separator: seperator between numbers
 * @n: the number of variable parameters
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		if (i == (n - 1) || separator == NULL)
			printf("%d", va_arg(list, int));
		else
			printf("%d%s", va_arg(list, int), separator);
	}
	va_end(list);
	printf("\n");
}

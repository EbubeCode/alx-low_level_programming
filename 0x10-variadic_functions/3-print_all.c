#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types arguments passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	char array[] = {'c', 'i', 'f', 's'};
	char *s, *a = (char *) format;
	va_list l;
	int i;

	va_start(l, format);
	while (*a != '\0')
	{
		i = 0;
		while (array[i++] != *a)
			;
		switch (--i)
		{
		case 0:
			printf("%c", va_arg(l, int));
			break;
		case 1:
			printf("%d", va_arg(l, int));
			break;
		case 2:
			printf("%.5f", va_arg(l, double));
			break;
		case 3:
			s = va_arg(l, char *);
			if (s == NULL)
				s = "(nil)";
			printf("%s", s);
			break;
		default:
			a++;
			continue;
		}
		a++;
		if (*a != '\0')
			printf(", ");
	}
	va_end(l);
	printf("\n");
}

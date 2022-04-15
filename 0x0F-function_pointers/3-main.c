#include "3-calc.h"

/**
 * main - entry point of application
 * @argc: argument count
 * @argv: array of arguments
 *
 * Return: success 0 else 98, 99, 100
 */
int main(int argc, char *argv[])
{
	char *a;
	int x, y;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	a = argv[2];
	if ((*a == '+' || *a == '-' || *a == '*' || *a == '/'
			|| *a == '%') && *(a + 1) == '\0')
	{
		x = atoi(argv[1]);
		y = atoi(argv[3]);
		if (y == 0 && (*a == '/' || *a == '%'))
		{
			printf("Error\n");
			return (100);
		}
		printf("%d\n", get_op_func(a)(x, y));
		return (0);
	}
	printf("Error\n");
	return (99);
}

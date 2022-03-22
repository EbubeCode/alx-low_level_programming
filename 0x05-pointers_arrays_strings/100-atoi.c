/**
 * pows - raise n to power x
 * @n: integer
 * @x: integer
 *
 * Return: the power of n to x
 */
int pows(int n, int x)
{
	int i;
	int result;

	result = 1;
	for (i = 0; i < x; i++)
		result *= n;
	return (result);
}

/**
 * _atoi - convert a string to an integer
 * @s: string to convert to integer
 *
 * Return: the inter gotten from the conversion
 */
int _atoi(char *s)
{
	int i;
	int x;
	int j;
	char *a;
	unsigned int n;
	int neg;

	i = 0;
	x = 0;
	a = s;
	neg = 0;
	for (; *a != '\0'; ++a)
	{
		if (*a == '-')
			neg++;
		if (*a >= 48 && *a <= 57)
		{
			x++;
			continue;
		}
		else if (x > 0)
			break;
		i++;
	}
	n = 0;
	if (x > 0)
	{
		for (j = 1; j <= x; j++)
		{
			n += (pows(10, (x - j)) * (s[(i + j - 1)] - '0'));
		}

		if (neg % 2 > 0)
			n = 0 - n;
	}
	return (n);
}

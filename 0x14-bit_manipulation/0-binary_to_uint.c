#include "main.h"

/**
 * binary_to_uint - converst a binary number to an unsigned int
 * @b: pointer to string of 0 and 1 chars
 *
 * Return: the converted number or else 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	char *a = (char *) b;

	if (a == NULL)
		return (0);

	while (*a != '\0')
	{
		if (*a != '0' && *a != '1')
			return (0);
		if (*a == '0')
			n = n << 1;
		else
		{
			n = n << 1;
			n += 1;

		}
		a++;
	}
	return (n);
}

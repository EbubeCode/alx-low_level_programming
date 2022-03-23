/**
 * reverse_array - reverses the contents of an array of integers a
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int x;
	int temp;

	for (x = 0; x < n / 2; x++)
	{
		temp = a[n - (x + 1)];
		a[n - (x + 1)] = a[x];
		a[x] = temp;
	}
}

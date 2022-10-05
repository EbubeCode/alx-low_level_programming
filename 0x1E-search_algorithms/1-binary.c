#include "search_algos.h"

/**
 * bi_search - binary search algorithm
 * @arr: array
 * @low: low
 * @high: high
 * @value: - value to find
 * Return: index of value or else -1
 */
int bi_search(int *arr, size_t low, size_t high, int value)
{
	size_t i, mid;

	if (low > high)
		return (-1);

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		if (i == low)
			printf("%d", arr[i]);
		else if (i == high)
			printf(", %d", arr[i]);
		else
			printf(", %d", arr[i]);
	}
	printf("\n");
	mid = (low + high) / 2;
	if (arr[mid] == value)
		return (mid);
	if (arr[mid] > value)
		return (bi_search(arr, low, mid - 1, value));
	return (bi_search(arr, mid + 1, high, value));
}

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: the array
 * @size: size of the array
 * @value: the value to find
 *
 * Return: index of value or else -1
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (bi_search(array, 0, size - 1, value));
}

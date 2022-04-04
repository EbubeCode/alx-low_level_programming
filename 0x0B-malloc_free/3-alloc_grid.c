#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - create a 2 dimensional array of integers
 * @width: the number of columns of the array
 * @height: the number of rows of the array
 *
 * Return: pointer to the 2D array
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = (int **)malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = (int *)malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			i--;
			for (; i >= 0; i--)
				free(arr[i]);
			free(arr);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	return (arr);
}

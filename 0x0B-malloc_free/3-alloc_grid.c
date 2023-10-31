#include <stdlib.h>
/**
 * **alloc_grid - function that returns a pointer to a 2 dimensional array of
 *                integers.
 *
 * @width: This is the columns of the array
 * @height: This is the rows of the array
 *
 * Return: Returns a pointer to a 2 dimensional array of integers.
 *         The function should return NULL on failure
 *         If width or height is 0 or negative, return NULL
 */
int **alloc_grid(int width, int height)
{
	int **matrix, i, j;

	if (width == 0)
		return (NULL);
	if (height == 0)
		return (NULL);
	matrix = malloc(height * sizeof(int *));
	if (matrix == NULL)
	{
		free(matrix);
		return (NULL);
	}
	for (i = 0; i < width; ++i)
	{
		matrix[i] = malloc(width * sizeof(int));
			if (matrix[i] == NULL)
			{
				for (i = 0; i < height; i++)
				{
					free(matrix[i]);
				}
			free(matrix);
			return (NULL);
			}
	}
	for (i = 0; i < height; ++i)
	{
		for (j = 0; j < width; ++j)
		{
			matrix[i][j] = 0;
		}
	}
	return (matrix);
}


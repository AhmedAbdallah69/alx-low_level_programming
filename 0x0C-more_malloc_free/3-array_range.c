#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers.
 *
 *
 * @min: This is the range min to allocate in the memory
 * @max: This is my range max to allocate in the memory
 *
 * Return: The pointer to the newly created array
 *         If min > max, return NULL
 *         If malloc fails, return NULL
 */
int *array_range(int min, int max)
{
	int i, m;
	int *p;

	if (min > max)
		return (NULL);
	m = min;
	p = (int *) malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; i <= (max - min); i++)
	{
		p[i] = m;
		m++;
	}
	return (p);
}

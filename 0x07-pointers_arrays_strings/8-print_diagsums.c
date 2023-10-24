#include <stdio.h>
/**
 * print_diagsums - print the sum the diognals of a square matrix of integer
 *
 * @a: This is the array to sum
 * @size: This is the length of the array
 */
void print_diagsums(int *a, int size)
{
	int primary_diag_sum = 0;
	int secondary_diag_sum = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		primary_diag_sum += a[i * size + i];
		secondary_diag_sum += a[i * size + size - i - 1];
	}

	printf("%d, %d\n", primary_diag_sum, secondary_diag_sum);
}

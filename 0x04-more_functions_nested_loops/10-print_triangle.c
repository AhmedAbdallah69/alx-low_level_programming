#include <stdio.h>
#include "main.h"
/**
  * print_triangle - Prints a triangle of squares according parameter
  * @size: The size of the squares triangle
  *
  * Return: empty
  */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		_putchar('\n');

	for (i = 0; i <= size; i++)
	{
	for (j = size - i - 1; j >= 0 ; --j)
		_putchar(' ');

	for (k = 0; k < i; ++k)
		_putchar('#');

	_putchar('\n');
	}
}

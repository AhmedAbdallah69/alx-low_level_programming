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


	for (i = 0; i <= 10; i++)
	{
	for (j = 10 - i - 1; j >= 0 ; --j)
		putchar(' ');

	for (k = 0; k < i; ++k)
		putchar('#');

	putchar('\n');
	}
}

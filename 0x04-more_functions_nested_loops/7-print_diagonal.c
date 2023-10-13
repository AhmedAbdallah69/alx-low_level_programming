#include <stdio.h>
#include "main.h"
/**
  * print_diagonal - Draws a diagonal lines according parameter
  * @n: The number of times to print diagonal lines
  *
  * Return: empty
  */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		_putchar (' ');

	_putchar ('\\');
	_putchar ('\n');
	}
	if (n == 0)
		_putchar('\n');
}

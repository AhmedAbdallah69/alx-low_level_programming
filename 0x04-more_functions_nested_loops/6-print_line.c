#include <stdio.h>
#include "main.h"
/**
 * print_line - a function that checks if a letter is uppercase.
 * @n: line length.
 * Return: line of length n.
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

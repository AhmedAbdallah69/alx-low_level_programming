#include <stdio.h>
/**
 * swap_int - a function that swaps the values of two integers given a pointer.
 * @a: a pointer to be acted upon.
 * @b: a pointer to be acted upon.
 * Return: void.
 */
void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}

#include <stdio.h>
/**
 * square - main function that calculates the square root using recursion.
 * @n: the int to calculate its square root.
 * @x: initializing int value.
 * Return: Integer of th square root.
 */
int square(int n, int x)
{
	if ((x * x) == n)
		return (x);
	else if ((x * x) < n)
		return (square(n, ++x));
	else
		return (-1);
}
/**
 * _sqrt_recursion - function that feeds the other calculating function.
 * @n: the int to calculate its square root.
 * Return: Integer of th square root.
 */
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

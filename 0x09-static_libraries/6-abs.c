#include <stdio.h>
#include "main.h"
/**
 * _abs - a function that calculates the absolute value of an integer
 *
 * @n: The int number to be checked.
 *
 * Return: Always an int
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n == 0)
	{
		return (n);
	}
	else
	{
		n *= -1;
		return (n);
	}
}

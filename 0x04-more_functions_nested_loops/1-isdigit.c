#include <stdio.h>
/**
 * _isupper - a function that checks for a digit.
 * @c: letter to be checked.
 * Return: 1 if uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

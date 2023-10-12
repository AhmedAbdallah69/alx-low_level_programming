#include <stdio.h>
/**
 * _isupper - a function that checks if a letter is uppercase.
 * @c: letter to be checked.
 * Return: 1 if uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

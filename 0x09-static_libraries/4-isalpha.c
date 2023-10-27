#include <stdio.h>
#include "main.h"
/**
 * _isalpha - a function that checks if a char is an alphabet letter
 *
 * @c: The character to be checked.
 *
 * Return: 1 if 'c' is an alphabet letter, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);

	else
		return (0);
}

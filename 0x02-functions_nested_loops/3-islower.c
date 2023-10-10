#include <stdio.h>
#include "main.h"
/**
 * _islower - a function that checks if a char is lowercase
 *
 * @c: The character to be checked.
 *
 * Return: 1 if 'c' is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);

	else
		return (0);
}

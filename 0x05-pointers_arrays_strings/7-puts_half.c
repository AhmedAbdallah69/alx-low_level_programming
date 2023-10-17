#include <stdio.h>
#include "main.h"
/**
 * puts_half - a function that prints the last half of a string.
 * @str: string to be acted upon.
 * Return: Always void.
 */
void puts_half(char *str)
{
	int length, n, i;

	for (length = 0; str[length] != 0; ++length)
		;
		if (length % 2 == 0)
			n = length / 2;
		else
			n = (length - 1) / 2;
	for (i = n; i < length; ++i)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

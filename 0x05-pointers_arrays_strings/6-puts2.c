#include <stdio.h>
#include "main.h"
/**
 * puts2 - a function that prints every other character of a string,
 * @s: string to be acted upon.
 * Return: Always void.
 */
void puts2(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}

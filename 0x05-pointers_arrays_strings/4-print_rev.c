#include <stdio.h>
#include "main.h"
/**
 * print_rev - a function that prints a string in reverse.
 * @s: string to be acted upon.
 * Return: Always void.
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
		;
	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}

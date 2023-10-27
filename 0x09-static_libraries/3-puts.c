#include <stdio.h>
#include "main.h"
/**
 * _puts - a function that prints a string similar to 'puts'.
 * @str: string to be acted upon.
 * Return: Always void.
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		_putchar(str[i]);
	_putchar('\n');
}

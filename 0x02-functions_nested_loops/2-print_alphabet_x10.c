#include <stdlib.h>
#include "main.h"
/**
 * print_alphabet - a function to print the alphabet ten times
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char ch = 'a';
	int i = 0, j = 0;

	while (j < 10)
	{
	while (i < 26)
	{
	_putchar(ch);
	ch++;
	i++;
	}
	_putchar('\n');
	j++;
	i = 0;
	ch = 'a';
	}
}

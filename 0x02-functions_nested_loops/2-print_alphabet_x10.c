#include <stdlib.h>
#include "main.h"
/**
 * print_alphabet - a function to print the alphabet
 *
 * Return: Always 0
 */
void print_alphabet(void)
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
	}
}

#include <stdio.h>
#include "main.h"
/**
 * more_numbers - a function that prints numbers from 0 to 14.
 * Return: Always void.
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i < 15; i++)
	{
	if (i < 10)
		_putchar('0' + i);
	else
	{
		_putchar('0' + 1);
		_putchar('0' + i - 10);
	}
	}
	putchar('\n');
}

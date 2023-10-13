#include <stdio.h>
#include "main.h"
/**
 * more_numbers - a function that prints numbers from 0 to 14.
 * Return: Always void.
 */
void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
	for (i = 0; i < 15; i++)
	{
		if (j > 9)
		{
			_putchar((i / 10) + '0');
		}
			_putchar((i % 10) + '0');
		}
	_putchar('\n');
	}
}

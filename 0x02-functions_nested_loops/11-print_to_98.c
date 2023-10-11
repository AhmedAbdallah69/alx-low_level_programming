#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - function to print numbers to 98.
 * @n: entry number to start from
 * Return: void
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
		printf("%d, " , n);
			n++;
		}
		printf("%d" , n);
	}
	else
	{
		while (n >= 99)
		{
		printf("%d, " , n);
			n--;
		}
		printf("%d" , n);
	}
	putchar('\n');
}

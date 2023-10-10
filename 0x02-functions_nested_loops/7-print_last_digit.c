#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of an integer.
 *
 * @n: The int number to be acted upon.
 *
 * Return: Always an int.
 */
int print_last_digit(int n)
{
	int a = n%10;
	_putchar('0' + a);
	return (a);
}

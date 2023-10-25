#include <stdio.h>
/**
 * _puts_recursion - prints a whole string using recursion.
 * @s: strin to be operated on.
 * Return: void.
 */
void _puts_recursion(char *s)
{
	if ((*s) == '\0')
	{
		putchar ('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(++s);
}

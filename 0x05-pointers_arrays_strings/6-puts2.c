#include <stdio.h>
/**
 * puts2 - a function that prints every other character of a string,
 * @s: string to be acted upon.
 * Return: Always void.
 */
void puts2(char *s)
{
	for (int i = 0; s[i] != 0; i++)
	{
		putchar(s[i]);
	i++;
	}
}

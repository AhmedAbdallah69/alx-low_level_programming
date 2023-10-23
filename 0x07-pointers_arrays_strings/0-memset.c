#include <stdio.h>
/**
 * _memset - a function that fills memory with a constant byte.
 * @s: string to change it's memory data.
 * @b: byte to fill with.
 * @n: number of memory bytes.
 * Return: a pointer to the same string given.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; ++i)
	s[i] = b;

	return (s);
}

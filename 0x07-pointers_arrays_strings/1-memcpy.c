#include <stdio.h>
/**
 * _memcpy - a function that copies memory area.
 * @dest: array to copy to.
 * @src: arrray to copy from.
 * @n: how many bytes to copy.
 *
 * Return: a pointer to the same string given.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; ++i)
	dest[i] = src[i];

	return (dest);
}

#include <stdio.h>
/**
 * _strcpy - a function that prints n elements of an array of integers.
 * @src: string to be copied.
 * @dest: string to be pasted into.
 * Return: Always char.
 */
char *_strcpy(char *dest, char *src)
{
int size, i, j;
	for (i = 0; src[i] != '\0'; ++i)
		;
	size = i + 1;
	for (j = 0; j < size; ++j)
	{
		dest[j] = src[j];
	}
	return (dest);
}

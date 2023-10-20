#include <stdio.h>
/**
 *_strncpy - Write a function that concatenates two strings.
 *
 *@dest: This is the output dest
 *@src: This is the input source
 *@n: int
 * Return: This return to dest, that concatenates two strings
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; ++i)
	{
		dest[i] = src[i];
	}
	if (i < n)
		dest[i] = '\0';
	return (dest);
}

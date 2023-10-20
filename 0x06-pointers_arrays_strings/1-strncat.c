#include <stdio.h>
/**
 *_strncat - Write a function that concatenates two strings.
 *
 *@dest: This is the output dest
 *@src: This is the input source
 *@n: int
 * Return: This return to dest, that concatenates two strings
 */
char *_strncat(char *dest, char *src, int n)
{
	int length, i;

	length = 0;
	i = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	for (i = 0; i < n && src[j] != '\0'; ++i, length++)
	{
		dest[length] = src[i];
	}
	dest[length] = '\0';
	return (dest);
}

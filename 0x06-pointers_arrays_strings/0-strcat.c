#include <stdio.h>
/**
 *_strcat - Write a function that concatenates two strings.
 *
 *@dest: This is the output dest
 *@src: This is the input source
 *
 * Return: This return to dest, that concatenates two strings
 */
char *_strcat(char *dest, char *src)
{
	int length, i;

	length = 0;
	i = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	for (i = 0; src[i] != '\0'; ++i, l++)
	{
		dest[length] = src[i];
	}
	dest[length] = '\0';
	return (dest);
}

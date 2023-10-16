#include <stdio.h>
/**
 * _strlen - a function that calcualtes string length.
 * @s: string to be acted upon.
 * Return: Always int.
 */
int _strlen(char *s)
{
	int i;

	for(i = 0; s[i] != 0; i++);
	return (i);
}

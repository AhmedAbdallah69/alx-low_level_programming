#include <stdio.h>
/**
 * _strchr - a function that locates a character in a string.
 * @s: string to be checked.
 * @c:charcter to be found.
 * Return: the pointer to the first occurrence of that character.
 */
char *_strchr(char *s, char c)
{
	int i;

		for (i = 0; s[i] != '\0'; i++)
		{
			if (s[i] == c)
			{
				return (s + i);
			}
		}
	return ('\0');
}

#include <stdio.h>
/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * The _strpbrk() function locates the first occurrence in the string s of any
 * of the bytes in the string accept
 *
 * @s: This is the input string
 * @accept: This is the string to locate
 *
 * Return: Returns a pointer to the byte in s that matches one of the bytes in
 * accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; ++i)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			return (s + i);
		}
	}
	return ('\0');
}

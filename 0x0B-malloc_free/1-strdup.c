#include <stdlib.h>
/**
 * _strdup - function that creates a dynamic array and copies a string into it;
 * @str: string to be copied.
 * Return: New string array pointer.
 */
char *_strdup(char *str)
{
	unsigned int i, size = 0, j;
	char *s;

	for (i = 0; str[i]  != '\0'; ++i)
	size++;

	s = malloc(sizeof(char) * size);

	if (s == NULL)
		return (NULL);

	for (j = 0; j < size; ++j)
		s[j] = str[j];

	s[size] = '\0';
	return (s);
}

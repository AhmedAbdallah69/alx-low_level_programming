#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - function that creates a dynamic array of a specific size
 * and initializes it to a given char.
 * @size: given size of the array.
 * @c: given char to initialize the array with.
 * Return: char pointer 's'.
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (0);

	char *s = (char *) malloc(sizeof(char) * size);

	for (int i = 0; i < size; ++i)
		*(s + i) = c;
	return (s);
}

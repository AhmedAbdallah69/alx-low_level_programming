#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - function that allocates memory for an array, using malloc
 *
 * @nmemb: This is the length to allocate in the memory
 * @size: This is the size of casting to save
 *
 * Return: Pointer to the allocated memory.
 *         If nmemb or size is 0, then _calloc returns NULL
 *         If malloc fails, then _calloc returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc((nmemb * size));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); ++i)
		p[i] = 0;

	return (p);
}

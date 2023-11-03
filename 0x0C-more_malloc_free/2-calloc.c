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
	unsigned int *t, *p, i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	t = malloc(nmemb * sizeof(size));

	if (t == NULL)
		return (NULL);

	for (i = 0; i < nmemb; ++i)
		t[i] = 0;

	p = (void *) t;

	return (p);
}

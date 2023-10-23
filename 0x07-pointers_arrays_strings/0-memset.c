#include <stdio.h>
/**
 * _memset - a function that fills memory with a constant byte.
 * @str: string to change it's memory data.
 * @ch: byte to fill with.
 * @n: number of memory bytes.
 * return: void.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

    for (i = 0; i < n; ++i) {
        s[i]=b;
    }
    return (s);
}

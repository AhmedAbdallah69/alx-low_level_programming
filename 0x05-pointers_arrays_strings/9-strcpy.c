#include <stdio.h>
char *_strcpy(char *dest, char *src)
{
int size, i, j;
	for (i = 0;src[i]!='\0'; ++i);
	size = i + 1;
	for (j = 0; j < i; ++j)
	{
		dest[j] = src[j];
	}
	return(dest);
}

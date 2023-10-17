#include <stdio.h>
char *_strcpy(char *dest, char *src)
{
int size, i;
    for (i = 0;src[i]!='\0'; ++i);
    size = i + 1;
    for (int j = 0; j < size; ++j) {
        dest[j] = src[j];
    }
    return(dest);
}

#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings.
 *
 * @s1: This is the first input string
 * @s2: This is the second input string
 * @n: This is the limit to copy the second string to the first string
 *
 * Return: This is the string joined
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int s1l = 0, s2l = 0, i, j = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; ++i)
		s1l++;

	for (i = 0; s2[i] != '\0'; ++i)
		s2l++;

	if (n >= s2l)
		n = s2l;

	p = malloc(sizeof(char) * (s1l + n));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < s1l ; ++i)
		p[i] = s1[i];

	for (i = s1l ; i < (s1l + n); ++i)
	{
		p[i] = s2[j];
		++j;
	}
	p[s1l + n] = '\0';
	return (p);
}

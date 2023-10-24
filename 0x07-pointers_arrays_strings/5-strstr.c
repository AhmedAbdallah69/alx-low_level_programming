/**
 * _strstr - Write a function that locates a substring.
 *
 * @haystack: This is the input string
 * @needle: This is a find to locate in the string
 *
 * Return: a pointer to the beginning of the located substring, or NULL if the
 * substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			char *hp = haystack;
			char *np = needle;

		while (*np != '\0')
		{
			if (*hp != *np)
				break;
			np++;
			hp++;
		}
		if (*np == '\0')
			return (haystack);
		}
		haystack++;
	}
	return ('\0');
}

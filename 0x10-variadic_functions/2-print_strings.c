#include <stdio.h>
#include <stdarg.h>
/**
* print_strings -  function that prints strings, followed by a new line
*
* @separator: This is the input separator
* @n: This is the number of items
*
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *s;

	va_start(list, n);
	for (i = 0; i < n; ++i)
	{
		s = va_arg(list, char *);

		if (s)
			printf("%s", s);
		else
			printf("(nil)");

		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}

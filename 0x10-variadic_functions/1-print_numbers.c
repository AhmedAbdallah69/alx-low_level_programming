#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - Function that prints numbers,
 *                 followed by a new line.
 *
 * @separator: This is input separator
 * @n: This is the input number
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	if (separator == NULL)
		return;

	va_start(list, n);
	for (i = 0; i < n; ++i)
	{
		printf("%d", va_arg(list, int));
		if (i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}

#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - Function that prints anything
 *
 * @format: This is the format to print a value
 *
 */
void print_all(const char * const format, ...)
{
	va_list list;
	char *s;
	int i = 0;

	va_start(list, format);

	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", (char) va_arg(list, int));
				break;
			case 'i':
				printf("%i", va_arg(list, int));
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				break;
			case 's':
				s = va_arg(list, char *);
				if (s)
				{
					printf("%s", s);
					break;
				}
					printf("(nil)");
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
		format[i] == 's') && format[(i + 1)] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(list);
}

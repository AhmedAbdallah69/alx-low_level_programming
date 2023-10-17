#include <stdio.h>
/**
 * _atoi - Convert a string to an integer
 * @s: The string to convert
 *
 * Description: This function converts a string to an integer, considering
 * signs and ignoring characters that are not digits.
 *
 * Return: The integer value of the string.
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
		num = (num * 10) + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);
	return (num * sign);
}

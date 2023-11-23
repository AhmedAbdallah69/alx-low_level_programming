#include "main.h"
/**
 * binary_to_uint - This funtion convert binary to decimal
 * @b: This is my string of entry
 * Return: This return to a digital number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int j = 1, i;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; ++i)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
	}

	for (i = i - 1; i >= 0 ; i--)
	{
		n += (b[i] - '0') * j;
		j *= 2;
	}

	return (n);
}

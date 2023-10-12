#include <stdio.h>
/**
 * main - Uses a for loop to determine if a number is positive or not
 *
 * Return: Always 0 (Success)
 */
void positive_or_negative(int c)
{

	if (c == 0)
	{
		printf("%d is zero\n", c);
	}
	else if (c > 0)
	{
		printf("%d is positive\n", c);
	}
	else if (c < 0)
	{
		printf("%d is negative\n", c);
	}
	return (0);
}

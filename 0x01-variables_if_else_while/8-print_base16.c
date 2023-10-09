#include <stdio.h>
/**
 * main - Uses a for loop to determine if a number is positive or not
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}

	i = 97;

	while (i < 103)
	{
		putchar(i);
		i++;
	}

	putchar('\n');
	return (0);
}

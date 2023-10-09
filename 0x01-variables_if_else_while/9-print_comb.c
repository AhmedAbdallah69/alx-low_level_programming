#include <stdio.h>
/**
 * main - Uses a for loop to determine if a number is positive or not
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 48;

	while (i < 57)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
		i++;
	}
	putchar(i);
	return (0);
}

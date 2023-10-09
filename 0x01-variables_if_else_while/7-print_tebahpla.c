#include <stdio.h>
/**
 * main - Uses a for loop to determine if a number is positive or not
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'z';
	int i = 0;

	while (i < 26)
	{
		putchar(ch);
		ch--;
		i++;
	}
	putchar('\n');
	return (0);
}

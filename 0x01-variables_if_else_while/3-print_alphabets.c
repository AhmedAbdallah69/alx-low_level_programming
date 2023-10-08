#include <stdio.h>
/**
 * main - Uses a for loop to determine if a number is positive or not
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch1 = 'a', ch2 = 'A';
	int i = 0;
	while (i < 26)
	{
	putchar(ch1);
	ch1++;
	i++;
	}
	i = 0;
	 while (i < 26)
        {
	putchar(ch2);
	ch2++;
	i++;
        }
	putchar('\n');
	return (0);
}

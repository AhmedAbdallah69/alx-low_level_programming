#include <stdio.h>
/**
 * main - Uses a for loop to determine if a number is positive or not
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';
	for (int i=0; i<26; i++)
	{
		putchar(ch);
		putchar('\n');
		ch++;
	}
	return (0);
}

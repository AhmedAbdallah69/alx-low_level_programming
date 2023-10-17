#include <stdio.h>
/**
 * rev_string - a function that reverses a string.
 * @s: string to be acted upon.
 * Return: Always void.
 */
#include <stdio.h>
void rev_string(char *s)
{
	int length, start, end;
	char temp;

	for (length = 0; s[length] != 0; length++)
		;
	start = 0;
	end = length - 1;
	while (start < end)
	{
	temp = s[start];
	s[start] = s[end];
	s[end] = temp;
	start++;
	end--;
	}
}


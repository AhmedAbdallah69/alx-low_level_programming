#include <stdio.h>
/**
 * print_rev - a function that reverses a string.
 * @s: string to be acted upon.
 * Return: Always void.
 */
#include <stdio.h>
void rev_string(char *s) {
	int length;
	for (length = 0; s[length] != 0; length++);
	int start = 0;
	int end = length - 1;
	char temp;
	while (start < end) {
	// Swap characters at the start and end positions
	temp = s[start];
	s[start] = s[end];
	s[end] = temp;
	// Move the start and end pointers towards each other
	start++;
	end--;
	}
}


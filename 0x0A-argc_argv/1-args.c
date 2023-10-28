#include <stdio.h>
/**
 * main - a program that prints the number of arguments passed into it
 *
 * @argc: This is the argument count
 * @argv: This is the argument vector
 *
 * Return: This return to 0
 *
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", --argc);
	return (0);
}

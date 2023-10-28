#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program that adds positive numbers
 * @argc: This is the argument count
 * @argv: This is the argument vector
 *
 * Return: 0;
 */
int main(int argc, char *argv[])
{
	int i, x, result;

	result = 0;
	if (argc < 3)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 1; i < argc; ++i)
	{
		x = strtol(argv[i], NULL, 10);

		if (x == 0)
		{
			printf("Error\n");
			return (1);
		}
		else
			result += x;
	}
	printf("%d\n", result);
	return (0);
}

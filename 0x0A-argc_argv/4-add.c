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
	int i, result;

	result = 0;
	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 1; i < argc; ++i)
	{
		int x = strtol(argv[i], NULL, 10);

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

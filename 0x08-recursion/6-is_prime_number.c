#include <stdio.h>
/**
* prime - actual calculating function.
*
* @n: number to be checked.
* @x: initializing value.
*
* Return: 1 if the input integer is a prime number, otherwise return 0
*/
int prime(int n, int x)
{
	if (x >= (n / 2) && n > 1)
		return (1);
	else if (n % x == 0 || n <= 1)
		return (0);
	else
		return (prime(n, ++x));
}
/**
 * is_prime_number - a function that checks if an int is prime.
 *
 * @n: number to be checked.
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	return (prime(n, 2));
}

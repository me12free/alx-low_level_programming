#include "main.h"
#include <stdio.h>
/**
 * check_prime - check if n is prime
 * @n: no to be checked
 * 1 if the input integer is a prime number, otherwise return 0
 * @i: iteration
 * Return: integer
 */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);

	if (n % i == 0 && i > 1)
		return (0);

	if ((n / i) < i)
		return (1);

	return (check_prime(n, i + 1));
}

/**
 * is_prime_number - return if number is prime
 * @n: integer value
 * Return: ineteger
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

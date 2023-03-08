#include "main.h"
/**
 * factorial - returns factorial of a number
 * @n: is integer
 *
 * Return: 1 on success and 0 otherwise
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

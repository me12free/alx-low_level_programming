#include "main.h"
/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: string
 *
 * Return: 1 On success and 0 on error
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

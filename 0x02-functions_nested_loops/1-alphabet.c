#include <stdio.h>
#include "main.h"
/**
 * print_alphabet -function that prints a-z
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		_putchar(x);
		x++;
	}
}

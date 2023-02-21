#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 -function that prints 10 times the alphabet
 *
 * Return : 0
 */
void print_alphabet_x10(void)
{
	char x = 'a';

	int y = 0;

	for (y = 0; y < 10; y++)
	{
		for (x = 'a'; x <= 'z'; x++)
			_putchar(x);
	_putchar('\n');
	}
}

#include "main.h"
#include <stdio.h>

/**
 * main - main func checking the code
 *
 * Return: o
 */

int main(void)
{
	char c = 'A';

	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	return (0);
}

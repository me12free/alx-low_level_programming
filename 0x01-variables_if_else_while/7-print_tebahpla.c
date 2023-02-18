#include <stdio.h>
/**
 * main - main program goes here
 *
 * Return: always o
 */
int main(void)
{
	char x = 'a';

	for (x = 'a'; x <= 'z'; x--)
		putchar(x);
	putchar('\n');
	return (0);
}

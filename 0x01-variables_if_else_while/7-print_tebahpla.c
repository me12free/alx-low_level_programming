#include <stdio.h>
/**
 * main - main program goes here
 *
 * Return: always o
 */
int main(void)
{
	char x = 'z';

	while (x >= 'a')
	{
		putchar(x);
		x--;
	}
	putchar('\n');
	return (0);
}

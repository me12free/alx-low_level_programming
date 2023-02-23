#include <stdio.h>
/**
 * main - my main program
 *
 * Return: always 0
 */
int main(void)
{
	char y = 'a';

	int x = 0;

	while (x < 10)
	{
		putchar(x + '0');
		x++;
	}
	while (y <= 'f')
	{
		putchar(y);
		y++;
	}
	putchar('\n');
	return (0);
}

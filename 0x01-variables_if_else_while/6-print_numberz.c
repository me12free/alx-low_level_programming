#include <stdio.h>
/**
 * main - mauin program goes here
 *
 * Return: always 0
 */
int main(void)
{
	int a;

	while (a < 10)
	{
		putchar(a + '0');
		a++;
	}
	putchar('\n');
	return (0);
}

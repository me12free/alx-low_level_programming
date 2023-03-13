#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * strtow - concatenates all the arguments of your program
 *@str: string
 *@av: arguments
 * Return: a pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	int i, k, n, size;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (k = 0; av[i][k] != '\0'; k++)
			;
		size += k + 1;
	}
	str = malloc(size + 1);
	if (str == 0)
		return (NULL);
	n = 0;
	for (i = 0; i < ac; i++)
	{
		for (k = 0; av[i][k] != '\0'; k++)
		{
			str[n] = av[i][k];
			n++;
		}
		str[n] = '\n';
		n++;
	}
	return (str);
}

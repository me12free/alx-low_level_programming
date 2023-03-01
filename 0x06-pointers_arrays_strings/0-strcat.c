#include "main.h"
#include "stdio.h"
/**
 * _strcat - concatenates two strings
 * @dest: the destination string
 * @src: the source string
 *
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int blen = 0, i;

	while (dest[blen])
	{
		blen++;
	}
	for (i = 0; src[i] != 0; i++)
	{
		dest[blen] = src[i];
		blen++;
	}
	dest[blen] = '\0';
	return (dest);
}

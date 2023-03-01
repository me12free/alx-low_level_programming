#include "main.h"
/**
  * _strncat - Concatenates two strings
  * @dest: The destination value
  * @src: The source value
  * @n: The limit of the concatenation
  *
  * Return: A pointer to the resulting string dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int blen = 0, j = 0;

	while (dest[blen])
	{
		blen++;
	}

	while (j < n && src[j])
	{
		dest[blen] = src[j];
		blen++;
		j++;
	}

	dest[blen + n + 1] = '\0';

	return (dest);
}

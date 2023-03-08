#include "main.h"
/**
 * _strlen_recursion - returns length of a string
 *
 * @s: string
 * Return: 1 onsuccess and 0 otherwise
 * */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}

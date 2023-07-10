#include "main.h"

/**
 * get_endianness - returns the number of bits
 * Return: 0 or 1
 */

int get_endianness(void)
{
	unsigned int n = 1;
	char *byte_ptr = (char *) &n;

	return ((int)(*byte_ptr));
}


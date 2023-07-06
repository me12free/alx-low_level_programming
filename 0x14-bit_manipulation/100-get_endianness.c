#include "main.h"

/**
 * get_endianness - returns the number of bits you would need to flip to get from one number to another.
 * Return: 0 or 1
 */

int get_endianness(void)
{
	unsigned int n = 1;
	char* byte_ptr = (char*) & n;

	return (int)(*byte_ptr);
}


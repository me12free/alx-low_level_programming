#include "main.h"

/**
 * get_endianness - Checks the endianness.
 *
 * Return: 0 or 1
 */
int get_endianness(void)
{
	int num = 1;
	char *endian_check = (char *)&num;

	return (*endian_check);
}

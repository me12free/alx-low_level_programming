#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - Converrts binary no to unsigned int.
 * @b: Pointer to string of 0 and 1 char
 * Return: If b is NUll
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int bit;

	if (b == NULL)
		return (0);
	for (bit = 0; b[bit] != '\0'; bit++)
	{
		if (b[bit] == '0')
			result = result << 1;
		else if (b[bit] == '1')
			result = (result << 1) | 1;
		else
			return (0);
	}
	return result;
}

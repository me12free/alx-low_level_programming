#include "main.h"

/**
 * flip_bits - number of bits you would need to flip
 * @m: flip number
 * @n: n
 * Return: no of flip bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long value = n ^ m;

	while (value != 0)
	{
		count += value & 1;
		value >>= 1;
	}
		return (count);
}

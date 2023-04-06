#include "main.h"

/**
 * flip_bits - Counts the number of bits to be flipped
 * @n: number
 * @m: number to flip
 * Return: number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int xor_value = n ^ m;

	while (xor_value != 0)
	{
		count += xor_value & 1;
		xor_value >>= 1;
	}
	return (count);
}

#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0.
 * @n: pointer of an unsigned long int.
 * @index: index of the bit.
 * Return: 1 if it works, -1 if it fails
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;


	if (index > 63)
		return (-1);

	x = 1 << index;

	if (*n & x)

		*n ^= x;
	return (1);



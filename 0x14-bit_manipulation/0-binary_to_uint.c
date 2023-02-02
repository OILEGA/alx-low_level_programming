#include "main.h"
/**
 * binary_to_uint - converts a binary number to unsigned int
 *
 * @b: string containing the binary number
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int unsint = 0;

	if (!b)

	return (0);

	for (x = 0; b[x]; x++)

	{
		if (b[x] < '0' || b[x] > '1')

			return (0);

		unsint = 2 * unsint + (b[x] - '0');

	}
	return (unsint);

}




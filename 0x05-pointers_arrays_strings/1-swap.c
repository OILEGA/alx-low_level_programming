#include "main.h"
/**
 * swap_int - function that swaps the values of two integers
 * @a: First int
 * @b: Second int
 * Return 0
 */

void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}

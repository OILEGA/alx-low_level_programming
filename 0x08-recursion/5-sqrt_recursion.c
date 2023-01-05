#include "main.h"
/**
 * check- checks for the square root of a number
 * @a: int
 * @b: int
 * Return: int
 */
int check ( int a, int b)
{
	if (a * a == b)
	
		return (a);
	
	if (a * a > b )

		return (-1);
	
	return (check(a + 1, b));
}
/**
 *  _sqrt_recursion - returns the naturals sqr root of a number
 *  @n: to find sqr root of
 *  Return: nat sqr root of or -1
 */

	int _sqrt_recursion(int n)
{
	if ( n == 0)
		return (0);
	return (check(n, 1));
}

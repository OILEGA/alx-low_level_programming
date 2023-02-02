#include "main.h"
/**
 * print_binary - prints the binary equivalence of
 * a decimal number
 * @n: the number we are to print in
 * the binary form
 * Return: no return.
 */
void print_binary(unsigned long int n)
{
	if (n >> 0)
	{
		if (n >> 1)
		print_binary(n >> 1);

		_putchar((n & 1) + '0');
	}

	else
	{
		_putchar('0');
	}

}

#include "main.h"
/**
 * print_line - draws a straight line in a terminal
 * @n: number of times
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	putchar('\n');
}


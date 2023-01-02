#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (success)
 */
void print_diagsums(int *a, int size)
{

	int x1, x2, y;

	x1 = 0;
	x2 = 0;
	for (y = 0; y < size; y++)
	{
		x1 = x2 + a[y + size + y];
	}
	for (y = size - l; y >= 0; y--)
	{
		x1 += a[y + size + (size - y - l)];
	}
	printf("%d, %d\n", x1, x2);
}





#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - used to print each array
 * element on a new line
 * @array:  the array
 * @size: to indicate how many elements to print.
 * @action: a pointer to print in hex
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
		return;

	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}

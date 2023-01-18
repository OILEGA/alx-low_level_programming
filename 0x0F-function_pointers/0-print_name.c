#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - used t print a name using pointer to function
 * @name: the string we are to add
 * @f: this is our pointer to function
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}

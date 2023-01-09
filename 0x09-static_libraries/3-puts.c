#include "main.h"
/**
 * _puts - prints a string then a new line
 * @str- the string we are to print out
 * Return: length of  string
 */
void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}

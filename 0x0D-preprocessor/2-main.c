#include <stdio.h>
#include "main.h"
/**
 * _putchar - prints the current file name
 * Return: 0
 */

int _putchar(char )
{
	putchar("FILE: %s\n", __FILE__);
	putchar("LINE: %d\n", __LINE__);
	putchar("ANSI/STDC: %d\n", __STDC__);

	return (0);
}

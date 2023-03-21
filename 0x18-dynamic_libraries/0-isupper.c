#include "main.h"

/**
 * _isupper - checks if parameter is an uppercase character.
 * @c: to check character
 * Return: 0 or 1
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}

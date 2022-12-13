#include "main.h"
/**
 * _isalpha - to check for char alphabets
 * @c: the char to be checked
 *
 * Return: 1 if char is lower or upper, o otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && <= 'Z'))
		return (1);
	else
		return (0);

}

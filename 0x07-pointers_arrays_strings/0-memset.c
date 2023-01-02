#include "main.h"
/**
 * _memset - to fill a block of memory with a specific value
 *@s: starting address of the memory to be filled
 *@b: the desired value
 *@n: the number of bytes to be changed
 * Return: changed array with new values for n bytes
 */

char *_memset(char *s, char b, unsigned int n)

{
	int i = 0;

	for (; n > 0; i++)
	{

		s[i] = b;
		n--;
	}
	return (s);
}


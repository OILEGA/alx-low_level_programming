#include "main.h"

/**
 * _strncpy - copies a string with n
 * @dest: copy to
 * @src: copy from
 * @n: number of char to be copied
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	x = 0;
	while (x < n && src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	while (x <  n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}

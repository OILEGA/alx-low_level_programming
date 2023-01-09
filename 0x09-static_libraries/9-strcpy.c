#include "main.h"
/**
 * char *_strncpy - a function that copies the string pointed
 * to by src
 * @dest: copy to
 * @src: copy from
 * @n: int
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int l = 0;
	int x = 0;

	while (*(src + 1) != '\0')
	{
		l++;
	}
	for (; x < l; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}

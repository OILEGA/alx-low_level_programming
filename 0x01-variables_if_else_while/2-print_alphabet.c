#include <stdio.h>

/**
 * main - prints alphabets in lower case
 * followed by a new line
 *
 * Return:0
*/
int main(void)
{
	char lowc;

	for (lowc = 'a'; lowc <= 'z'; lowc++)
	{
		_putchar (lowc);
	}
	_putchar('\n');
	return (0);
}

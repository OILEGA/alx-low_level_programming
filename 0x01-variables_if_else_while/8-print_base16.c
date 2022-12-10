#include <stdio.h>

/**
 * main - printing numbers to base 16 in lower case
 * Return:0
*/
int main(void)
{
	int num;
	char ch;

	for (num = 0; num < 10; num++)
		putchar ((num % 10) + '0');

	for (ch = 'a'; ch <= 'f'; ch++)
		putchar (ch);

	putchar ('\n');

	return (0);
}



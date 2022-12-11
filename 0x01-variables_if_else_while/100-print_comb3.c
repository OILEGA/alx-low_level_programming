#include <stdio.h>
#include <stdlib.h>

/**
 * main - print different combinations of two digit numbers
 * Return:0
*/
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar (i % 10 + '0');
			putchar (j % 10 + '0');
			if (i == 8 && j == 8)
			putchar (',');
			putchar (' ');
		}
	}
	putchar ('\n');
	return (0);
}

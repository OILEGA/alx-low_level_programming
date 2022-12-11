#include <stdio.h>
#include <stdlib.h>
/**
 * main -print combination of three digits
 * Return:0
*/
int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{

		for (j = i + 1; j < 100; j++)
		{

			putchar (i % 100 + '0');
			putchar (j % 100 + '0');
			if (i != 80 || j != 90)
				putchar (',');
				putchar (' ');
		}
		putchar ('\n');
	return (0);
}

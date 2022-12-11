#include <stdio.h>
#include <stdlib.h>
/**
 * main -print all possible different
 * combinations of three digits
 * Return:0
*/
int main(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{

		for (j = i + 1; j < 10; j++)
		{

			putchar (i % 10 + '0');
			putchar (j % 10 + '0');
			if (i == 8 && j == 9)
				putchar (',');
				putchar (' ');
		}
	}
	return (0);
}

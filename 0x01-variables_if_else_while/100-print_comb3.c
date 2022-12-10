#include <stdio.h>
#include <stdlib.h>

/**
 * main - print different combinations of two digit numbers
 * Return:0
*/
int main(void)
{
	for (int i = 0; i < 8; i++)
	{
		for (int j = i + 1; j < 9; j++)
		{
			for (int k = j + 1; k < 10; k++)
			{
				putchar (i + '0');
				putchar (j + '0');
				putchar (k + '0');
				putchar (' ');
			}
		}
	}
	return (0);
}

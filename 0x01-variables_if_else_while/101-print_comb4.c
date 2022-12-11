#include <stdio.h>
#include <stdlib.h>
/**
 * main -print combination of three digits
 * Return:0
*/
int main(void)
{
	int i, j, k;

	for (i = 0; i <= 7; i++)
	{

		for (j = i; j <= 8; j++)
		{
			for (k = 2; k <= 9; k++)
			{
				if (i > j || i > k || j > k)
					continue;
				if (i == j || i == k || j == k)
					continue;
				if (i == j && i == k)
					continue;

				putchar (i % 10 + '0');
				putchar (j % 10 + '0');
				putchar (k % 10 + '0');
				if (i == 7 && j == 8 && k == 9)
					continue;
				putchar (',');
				putchar (' ');
			}
		}
		putchar ('\n');
	}
	return (0);
}

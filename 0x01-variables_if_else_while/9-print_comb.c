#include <stdio.h>

/**
 * main -combination of numbers
 * Return:0
*/
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar (n);
		if (n != 57)
		{
			putchar (',');
			putchar (' ');
		}
}
	return (0);
}

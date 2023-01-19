#include <stdio.h>
#include<stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - Prints strings followed by new line
 * @n: number of strings passed to the fxn
 * @...: a variable number of strings to be printed
 * @separator: the string to be printed btw numbers
 * Description: If separator is NULL, don't print
 * If one of the strings is NULL, print (nil)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int i;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		printf("%s", str);

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(strings);
}



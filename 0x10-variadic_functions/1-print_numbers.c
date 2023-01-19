#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers followed by a new line
 * @n: number of integers passed to the function
 * @...: a variable of numbers to be printed
 * @separator: is the string to be printed between numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nos;
	unsigned int i;

	va_start(nos, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nos, unsigned int));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(nos);
}


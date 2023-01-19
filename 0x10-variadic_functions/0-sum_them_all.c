#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - prints sum of all values
 * @n: the number of parameters passed to the function
 * @...: number of parameters to calculate sum of
 * Return: 0 if n == 0, otherwise- sum all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list allpara;

	va_start(allpara, n);

	 unsigned int i, sum = 0;

	for (i = 0; i < n; i++)
		sum += va_arg(allpara, unsigned int);
	va_end(allpara);
	return (sum);
}




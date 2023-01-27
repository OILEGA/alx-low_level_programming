#include <stdio.h>
/**
 * before_main - function to be executed before the main
 * Return: 0
 */
void __attribute__ ((constructor)) before_main()
{
	printf(" You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}

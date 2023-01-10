#include <stdio.h>
#include "main.h"

/**
 * main - print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
int count = 0; /*declaring our variables */
if (argc > 0)
{
	while (count < argc) /*while is used to print each argument */
	{
	printf("%s\n", argv[count]);
	count++;
	}
}
return (0);
}

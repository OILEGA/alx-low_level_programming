#include <stdio.h>
#include "main.h"

/**
 * main - print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
(void) argv; /* this is used to ignore argv */
printf("%i\n", argc - 1);

return (0);
}
